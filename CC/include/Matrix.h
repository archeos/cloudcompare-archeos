//##########################################################################
//#                                                                        #
//#                               CCLIB                                    #
//#                                                                        #
//#  This program is free software; you can redistribute it and/or modify  #
//#  it under the terms of the GNU Library General Public License as       #
//#  published by the Free Software Foundation; version 2 of the License.  #
//#                                                                        #
//#  This program is distributed in the hope that it will be useful,       #
//#  but WITHOUT ANY WARRANTY; without even the implied warranty of        #
//#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         #
//#  GNU General Public License for more details.                          #
//#                                                                        #
//#          COPYRIGHT: EDF R&D / TELECOM ParisTech (ENST-TSI)             #
//#                                                                        #
//##########################################################################
//
//*********************** Last revision of this file ***********************
//$Author::                                                                $
//$Rev::                                                                   $
//$LastChangedDate::                                                       $
//**************************************************************************
//

#ifndef MATRIX_HEADER
#define MATRIX_HEADER

#ifdef _MSC_VER
//To get rid of the really annoying warnings about template class exportation
#pragma warning( disable: 4251 )
#pragma warning( disable: 4530 )
#endif

#include <assert.h>
#include <string.h>
#include <algorithm>

#define ROTATE(a,i,j,k,l) g=a[i][j];h=a[k][l];a[i][j]=g-s*(h+g*tau);a[k][l]=h+s*(g-h*tau);

namespace CCLib
{

	//! Square matrix
	template <typename Scalar> class MatrixTpl
	{
	public:

		//! Default constructor
		/** Warning: invalid matrix.
		**/
		MatrixTpl()
		{
			init(0);
		}

		//! Constructor with a given size
		/** \param size the (square) matrix dimension
		**/
		MatrixTpl(unsigned size)
		{
			init(size);
		}

		//! Constructor from another matrix
		/** \param mat matrix
		**/
		MatrixTpl(const MatrixTpl& mat)
		{
			init(mat.m_matrixSize);

			*this = mat;
		}

		//! "From OpenGl" constructor (float version)
		/** The matrix dimension is automatically set to 4.
			It can be forced to 3 (size_3 = true). In this
			case, only the rotation part will be 'imported'.
			\param M16 a table of 16 floats (OpenGL float transformation matrix)
			\param rotationOnly consider only the roation part (3x3 matrix)
		**/
		MatrixTpl(const float M16f[], bool rotationOnly = false)
		{
			unsigned l,c,size=(rotationOnly ? 3 : 4);

			init(size);

			for (l=0;l<size;l++)
				for (c=0;c<size;c++)
					m_values[l][c] = (Scalar)M16f[c*4+l];
		}

		//! "From OpenGl" constructor (double version)
		/** The matrix dimension is automatically set to 4.
			It can be forced to 3 (size_3 = true). In this
			case, only the rotation part will be 'imported'.
			\param M16 a table of 16 floats (OpenGL double transformation matrix)
			\param rotationOnly consider only the roation part (3x3 matrix)
		**/
		MatrixTpl(const double M16d[], bool rotationOnly = false)
		{
			unsigned l,c,size=(rotationOnly ? 3 : 4);

			init(size);

			for (l=0;l<size;l++)
				for (c=0;c<size;c++)
					m_values[l][c] = (Scalar)M16d[c*4+l];
		}

		//! Default destructor
		virtual ~MatrixTpl()
		{
			invalidate();
		}

		//! Returns matrix validity
		/** Matrix is invalid if its size is 0!
		**/
		bool isValid() const
		{
			return (m_matrixSize!=0);
		}

		//! Invalidates matrix
		/** Size is reset to 0.
		**/
		void invalidate()
		{
			if (eigenValues)
				delete[] eigenValues;
			eigenValues=0;

			for (unsigned i=0;i<m_matrixSize;i++)
				delete[] m_values[i];
			delete[] m_values;
			m_values=0;

			m_matrixSize=matrixSquareSize=0;
		}

		//! Returns matrix size
		inline unsigned size() const { return m_matrixSize; }

		//! The matrix lines
		/** public for easy/fast access
		**/
		Scalar** m_values;

		//! Returns pointer to matrix line
		inline Scalar* line(unsigned index) { return m_values[index]; }

		//! Sets a particular matrix value
		void inline setValue(unsigned line, unsigned column, Scalar value)
		{
			m_values[line][column]=value;
		}

		//! Returns a particular matrix value
		Scalar inline getValue(unsigned line, unsigned column) const
		{
			return m_values[line][column];
		}

		//! Matrix copy operator
		MatrixTpl& operator = (const MatrixTpl& B)
		{
			if (m_matrixSize != B.size())
			{
				invalidate();
				init(B.size());
			}

			for (unsigned l=0;l<m_matrixSize;l++)
				for (unsigned c=0;c<m_matrixSize;c++)
					m_values[l][c] = B.m_values[l][c];

			if (B.eigenValues)
			{
				enableEigenValues();
				memcpy(eigenValues,B.eigenValues,sizeof(Scalar)*m_matrixSize);
			}

			return *this;
		}

		//! Addition
		MatrixTpl operator + (const MatrixTpl& B) const
		{
			MatrixTpl C = *this;
			C+=B;

			return C;
		}

		//! In-place addition
		const MatrixTpl& operator += (const MatrixTpl& B)
		{
			assert(B.size() == m_matrixSize);

			unsigned l,c;
			for (l=0;l<m_matrixSize;l++)
				for (c=0;c<m_matrixSize;c++)
					m_values[l][c] += B.m_values[l][c];

			return *this;
		}

		//! Substraction
		MatrixTpl operator - (const MatrixTpl& B) const
		{
			MatrixTpl C = *this;
			C-=B;

			return C;
		}

		//! In-place substraction
		const MatrixTpl& operator -= (const MatrixTpl& B)
		{
			assert(B.size() == m_matrixSize);

			unsigned l,c;
			for (l=0;l<m_matrixSize;l++)
				for (c=0;c<m_matrixSize;c++)
					m_values[l][c] -= B.m_values[l][c];

			return *this;
		}

		//! Multiplication
		MatrixTpl operator * (const MatrixTpl& B) const
		{
			assert(B.size() == m_matrixSize);

			MatrixTpl C(m_matrixSize);

			for (unsigned l=0;l<m_matrixSize;l++)
			{
				for (unsigned c=0;c<m_matrixSize;c++)
				{
					Scalar sum=0.0;
					for (unsigned k=0;k<m_matrixSize;k++)
						sum += m_values[l][k]*B.m_values[k][c];
					C.m_values[l][c]=sum;
				}
			}

			return C;
		}

		//! Multiplication by a vector
		CCVector3 operator * (const CCVector3& V) const
		{
			assert(m_matrixSize == 3);

			CCVector3 result;
			apply(V.u,result.u);
			return result;
		}

		//! In-place multiplication
		const MatrixTpl& operator *= (const MatrixTpl& B)
		{
			*this = (*this) * B;

			return *this;
		}

		//! In-place multiplication by a vector
		/** Vec must have the same size as matrix. Returns Vec = M.Vec.
		**/
		void apply(Scalar Vec[]) const
		{
			//we apply matrix to Vec and get the result in a new vector
			Scalar* V = new Scalar[m_matrixSize];
			apply(Vec,V);
			//we copy result to Vec
			memcpy(Vec,V,sizeof(Scalar)*m_matrixSize);
			//we release temp vector
			delete[] V;
		}

		//! Multiplication by a vector
		/** Vec must have the same size as matrix. Returns result = M.Vec.
		**/
		void apply(const Scalar Vec[], Scalar result[]) const
		{
			for (unsigned l=0;l<m_matrixSize;l++)
			{
				Scalar sum=0.0;
				for (unsigned k=0;k<m_matrixSize;k++)
					sum += m_values[l][k] * (Scalar)Vec[k];
				result[l]=sum;
			}
		}

		//! In-place transpose
		void transpose()
		{
			for (unsigned l=0;l<m_matrixSize-1;l++)
				for (unsigned c=l+1;c<m_matrixSize;c++)
					std::swap(m_values[l][c],m_values[c][l]);
		}

		//! Returns transpose
		MatrixTpl toTranspose()
		{
			MatrixTpl T(*this);
			T.transpose();

			return T;
		}

		//! Sets all elements to 0
		void clear()
		{
			for (unsigned l=0;l<m_matrixSize;++l)
				memset(m_values[l],0,sizeof(Scalar)*m_matrixSize);

			if (eigenValues)
				memset(eigenValues,0,sizeof(Scalar)*m_matrixSize);
		}

		//! Returns inverse (Gauss)
		MatrixTpl inv() const
		{
			unsigned i,j,k;
			Scalar tmpVal;

			//we create the n by 2n matrix, composed of this matrix and the identity
			Scalar** tempM = new Scalar*[m_matrixSize];
			for (i=0;i<m_matrixSize;i++)
				tempM[i] = new Scalar[2*m_matrixSize];

			for (i=0;i<m_matrixSize;i++)
				for (j=0;j<m_matrixSize;j++)
				{
					tempM[i][j] = m_values[i][j];
					if (i == j)
						tempM[i][j+m_matrixSize] = 1.0;
					else
						tempM[i][j+m_matrixSize] = 0.0;
				}

				//Gauss pivot
				for (i=0;i<m_matrixSize;i++)
				{
					//we look for pivot (first non zero element)
					j = i;

					while (tempM[j][i] == 0)
					{
						if (++j >= m_matrixSize)
						{
							//non inversible matrix!
							return MatrixTpl();
						}
					}

					//swap the 2 lines if they are different
					//(we only start by the ith element (as all the others are zero!)
					if (i != j)
						for (k=i; k<2*m_matrixSize; k++)
							std::swap(tempM[i][k],tempM[j][k]);

					//we scale the matrix to make the pivot equal to 1
					if (tempM[i][i] != 1.0)
					{
						tmpVal = tempM[i][i];
						for (j=i; j<2*m_matrixSize; j++)
							tempM[i][j] /= tmpVal;
					}

					//after the pivot value, all elements are set to zero
					for (j=i+1;j<m_matrixSize;j++)
						if (tempM[j][i] != 0.0)
						{
							tmpVal = tempM[j][i];
							for (k=i;k<2*m_matrixSize;k++)
								tempM[j][k] -= tempM[i][k]*tmpVal;
						}
				}

				//reduction
				for (i=m_matrixSize-1;i>0;i--)
					for (j=0;j<i;j++)
						if (tempM[j][i] != 0.0)
						{
							tmpVal = tempM[j][i];
							for (k=i;k<2*m_matrixSize;k++)
								tempM[j][k] -= tempM[i][k] * tmpVal;
						}

						//result: second part or tempM
						MatrixTpl result(m_matrixSize);
						for (i=0;i<m_matrixSize;i++)
							for (j=0;j<m_matrixSize;j++)
								result.m_values[i][j]=tempM[i][j+m_matrixSize];

						//we release temp matrix from memory
						for (i=0;i<m_matrixSize;i++)
							delete[] tempM[i];
						delete[] tempM;

						return result;
		}

		//! Prints out matrix to console or file
		/** \param fp ASCII FILE handle (or 0 to print to console)
		**/
		void print(FILE* fp = 0) const
		{
			for (unsigned l=0;l<m_matrixSize;l++)
			{
				for (unsigned c=0;c<m_matrixSize;c++)
					if (fp)
						fprintf(fp,"%6.4f ",m_values[l][c]);
					else
						printf("%6.4f ",m_values[l][c]);
				if (fp)
					fprintf(fp,"\n");
				else
					printf("\n");
			}
		}

		//! Sets matrix to identity
		void toIdentity()
		{
			clear();

			for (unsigned l=0;l<m_matrixSize;l++)
				m_values[l][l]=1.0;
		}

		//! Scales matrix (all elements are multiplied by the same coef.)
		void scale(Scalar coef)
		{
			for (unsigned l=0;l<m_matrixSize;l++)
				for (unsigned c=0;c<m_matrixSize;c++)
					m_values[l][c] *= coef;
		}

		//! Returns trace
		Scalar trace() const
		{
			Scalar trace = 0;

			for (unsigned l=0;l<m_matrixSize;l++)
				trace += m_values[l][l];

			return trace;
		}

		//! Returns determinant
		double computeDet() const
		{
			return computeSubDet(m_values,m_matrixSize);
		}

		//! Creates a rotation matrix from a quaternion (float version)
		/** Shortcut to double version of initFromQuaternion)
			\param q normalized quaternion (4 float values)
			\return a 3x3 rotation matrix
		**/
		void initFromQuaternion(const float q[])
		{
			double qd[4]={  (double)q[0],
							(double)q[1],
							(double)q[2],
							(double)q[3]};

			initFromQuaternion(qd);
		}

		//! Creates a rotation matrix from a quaternion (double version)
		/** Quaternion is composed of 4 values: an angle (cos(alpha/2))
			and an axis (sin(alpha/2)*unit vector).
			\param q normalized quaternion (4 double values)
			\return a 3x3 rotation matrix
		**/
		void initFromQuaternion(const double q[])
		{
			if (m_matrixSize==0)
				init(3);
			assert(m_matrixSize==3);

			double q00 = q[0]*q[0];
			double q11 = q[1]*q[1];
			double q22 = q[2]*q[2];
			double q33 = q[3]*q[3];
			double q03 = q[0]*q[3];
			double q13 = q[1]*q[3];
			double q23 = q[2]*q[3];
			double q02 = q[0]*q[2];
			double q12 = q[1]*q[2];
			double q01 = q[0]*q[1];

			m_values[0][0] = (Scalar)(q00 + q11 - q22 - q33);
			m_values[1][1] = (Scalar)(q00 - q11 + q22 - q33);
			m_values[2][2] = (Scalar)(q00 - q11 - q22 + q33);
			m_values[0][1] = (Scalar)(2.0*(q12-q03));
			m_values[1][0] = (Scalar)(2.0*(q12+q03));
			m_values[0][2] = (Scalar)(2.0*(q13+q02));
			m_values[2][0] = (Scalar)(2.0*(q13-q02));
			m_values[1][2] = (Scalar)(2.0*(q23-q01));
			m_values[2][1] = (Scalar)(2.0*(q23+q01));
		}

		//! Converts rotation matrix to quaternion
		/** Warning: for 3x3 matrix only!
			From libE57 'best practices' (http://www.libe57.org/best.html)
		**/
		bool toQuaternion(double q[/*4*/])
		{
			if (m_matrixSize!=3)
				return false;

			double w,x,y,z;		//quaternion

			double dTrace = (double)m_values[0][0] + (double)m_values[1][1] + (double)m_values[2][2] + 1.0;
			if(dTrace > 1.0e-6)
			{
				double S = 2.0 * sqrt(dTrace);
				x = (m_values[2][1] - m_values[1][2]) / S;
				y = (m_values[0][2] - m_values[2][0]) / S;
				z = (m_values[1][0] - m_values[0][1]) / S;
				w = 0.25 * S;	
			}
			else if((m_values[0][0] > m_values[1][1]) && (m_values[0][0] > m_values[2][2]))
			{
				double S = sqrt(1.0 + m_values[0][0] - m_values[1][1] - m_values[2][2]) * 2.0;
				x = 0.25 * S;
				y = (m_values[1][0] + m_values[0][1]) / S;
				z = (m_values[0][2] + m_values[2][0]) / S;
				w = (m_values[2][1] - m_values[1][2]) / S;
			}
			else if(m_values[1][1] > m_values[2][2])
			{
				double S = sqrt(1.0 + m_values[1][1] - m_values[0][0] - m_values[2][2]) * 2.0;
				x = (m_values[1][0] + m_values[0][1]) / S;
				y = 0.25 * S;
				z = (m_values[2][1] + m_values[1][2]) / S;
				w = (m_values[0][2] - m_values[2][0]) / S;
			}
			else
			{
				double S = sqrt(1.0 + m_values[2][2] - m_values[0][0] - m_values[1][1]) * 2.0;
				x = (m_values[0][2] + m_values[2][0]) / S;
				y = (m_values[2][1] + m_values[1][2]) / S;
				z = 0.25 * S;
				w = (m_values[1][0] - m_values[0][1]) / S;
			}

			// normalize the quaternion if the matrix is not a clean rigid body matrix or if it has scaler information.
			double len = sqrt( w*w + x*x + y*y + z*z);
			if (len != 0.)
			{	
				q[0] = w/len;
				q[1] = x/len;
				q[2] = y/len;
				q[3] = z/len;

				return true;
			}

			return false;
		}

		//! Returns Delta-determinant (see Kramer formula)
		Scalar deltaDeterminant(unsigned column, Scalar* Vec) const
		{
			MatrixTpl mat(m_matrixSize);

			unsigned i,j;
			for (i=0;i<m_matrixSize;i++)
			{
				if (column==i)
				{
					for (j=0;j<m_matrixSize;j++)
					{
						mat.m_values[j][i] = (Scalar)(*Vec);
						Vec++;
					}
				}
				else
				{
					for (j=0;j<m_matrixSize;j++)
						mat.m_values[j][i] = m_values[j][i];
				}
			}

			return mat.computeDet();
		}

		//! Computes eigen vectors (and values) with the Jacobian method
		/** See numerical recipes.
		**/
		MatrixTpl computeJacobianEigenValuesAndVectors() const
		{
			if (!isValid())
				return MatrixTpl();

			int j,iq,ip,i,nrot;
			Scalar tresh,theta,tau,t,sm,s,h,g,c,*b,*z,*d;

			MatrixTpl eigenVectors(m_matrixSize);
			eigenVectors.toIdentity();
			eigenVectors.enableEigenValues();

			b = new Scalar[m_matrixSize];
			z = new Scalar[m_matrixSize];
			d = eigenVectors.eigenValues;

			for (ip=0;ip<(int)m_matrixSize;ip++)
			{
				b[ip]=d[ip]=m_values[ip][ip]; //Initialize b and d to the diagonal of a.
				z[ip]=0.0; //This vector will accumulate terms of the form tapq as in equation (11.1.14)
			}

			nrot=0;
			for (i=1;i<=50;i++)
			{
				sm=0.0;
				for (ip=0;ip<(int)m_matrixSize-1;ip++) //Sum off-diagonal elements.
				{
					for (iq=ip+1;iq<(int)m_matrixSize;iq++)
						sm += fabs(m_values[ip][iq]);
				}

				if (sm == 0.0) //The normal return, which relies on quadratic convergence to machine underflow.
				{
					delete[] z;
					delete[] b;

					//we only need the absolute values of eigenvalues
					for (ip=0;ip<(int)m_matrixSize;ip++)
						d[ip]=fabs(d[ip]);

					return eigenVectors;
				}

				if (i < 4)
					tresh=(Scalar)0.2 * sm/(Scalar)matrixSquareSize; //...on the first three sweeps.
				else
					tresh=(Scalar)0.0; //...thereafter.

				for (ip=0;ip<(int)m_matrixSize-1;ip++)
				{
					for (iq=ip+1;iq<(int)m_matrixSize;iq++)
					{
						g=(Scalar)100.0 * fabs(m_values[ip][iq]);
						//After four sweeps, skip the rotation if the off-diagonal element is small.
						if (i > 4 && (float)(fabs(d[ip])+g) == (float)fabs(d[ip])
							&& (float)(fabs(d[iq])+g) == (float)fabs(d[iq]))
						{
							m_values[ip][iq]=0.0;
						}
						else if (fabs(m_values[ip][iq]) > tresh)
						{
							h=d[iq]-d[ip];
							if ((float)(fabs(h)+g) == (float)fabs(h))
								t = m_values[ip][iq]/h; //t = 1/(2�theta)
							else
							{
								theta=(Scalar)0.5 * h/m_values[ip][iq]; //Equation (11.1.10).
								t=(Scalar)1.0/(fabs(theta)+sqrt((Scalar)1.0+theta*theta));
								if (theta < 0.0)
									t = -t;
							}

							c=(Scalar)1.0/sqrt((Scalar)1.0+t*t);
							s=t*c;
							tau=s/((Scalar)1.0+c);
							h=t*m_values[ip][iq];
							z[ip] -= h;
							z[iq] += h;
							d[ip] -= h;
							d[iq] += h;
							m_values[ip][iq]=0.0;

							for (j=0;j<=ip-1;j++) //Case of rotations 1 <= j < p.
							{
								ROTATE(m_values,j,ip,j,iq)
							}
							for (j=ip+1;j<=iq-1;j++) //Case of rotations p < j < q.
							{
								ROTATE(m_values,ip,j,j,iq)
							}
							for (j=iq+1;j<(int)m_matrixSize;j++) //Case of rotations q < j <= n.
							{
								ROTATE(m_values,ip,j,iq,j)
							}
							for (j=0;j<(int)m_matrixSize;j++)
							{
								ROTATE(eigenVectors.m_values,j,ip,j,iq)
							}

							++nrot;
						}

					}

				}

				for (ip=0;ip<(int)m_matrixSize;ip++)
				{
					b[ip]+=z[ip];
					d[ip]=b[ip]; //Update d with the sum of tapq,
					z[ip]=0.0; //and reinitialize z.
				}

			}

			delete[] b;
			delete[] z;

			//Too many iterations in routine jacobi!
			return MatrixTpl();
		}

		//! Converts a 3*3 or 4*4 matrix to an OpenGL-style float matrix (float[16])
		void toGlMatrix(float M16f[]) const
		{
			assert(m_matrixSize == 3 || m_matrixSize == 4);
			memset(M16f,0,sizeof(float)*16);

			unsigned char l,c;

			for (l=0;l<3;l++)
				for (c=0;c<3;c++)
					M16f[l+c*4] = (float)m_values[l][c];

			if (m_matrixSize == 4)
				for (l=0;l<3;l++)
				{
					M16f[12+l] = (float)m_values[3][l];
					M16f[3+l*4] = (float)m_values[l][3];
				}

			M16f[15]=1.0f;
		}

		//! Converts a 3*3 or 4*4 matrix to an OpenGL-style double matrix (double[16])
		void toGlMatrix(double M16d[]) const
		{
			assert(m_matrixSize == 3 || m_matrixSize == 4);
			memset(M16d,0,sizeof(double)*16);

			unsigned char l,c;

			for (l=0;l<3;l++)
				for (c=0;c<3;c++)
					M16d[l+c*4] = (double)m_values[l][c];

			if (m_matrixSize == 4)
				for (l=0;l<3;l++)
				{
					M16d[12+l] = (double)m_values[3][l];
					M16d[3+l*4] = (double)m_values[l][3];
				}

			M16d[15]=1.0;
		}

		//! Sorts the eigenvectors in the decreasing order of their associated eigenvalues
		void sortEigenValuesAndVectors()
		{
			if (!eigenValues)
				return;

			unsigned k,j,i;
			for (i=0;i<m_matrixSize-1;i++)
			{
				k=i;
				for (j=i+1;j<m_matrixSize;j++)
					if (eigenValues[j] > eigenValues[k])
						k=j;

				if (k!=i)
				{
					std::swap(eigenValues[i],eigenValues[k]);
					for (j=0;j<m_matrixSize;j++)
						std::swap(m_values[j][i],m_values[j][k]);
				}
			}
		}


		//! Returns the biggest eigenvalue and ist associated eigenvector
		/** \param maxEigenVector output vector to store max eigen vector
		\return max eigen value
		**/
		Scalar getMaxEigenValueAndVector(Scalar maxEigenVector[]) const
		{
			assert(eigenValues);

			unsigned i,maxIndex=0;
			for (i=1;i<m_matrixSize;++i)
				if (eigenValues[i]>eigenValues[maxIndex])
					maxIndex=i;

			return getEigenValueAndVector(maxIndex,maxEigenVector);
		}

		//! Returns the smallest eigenvalue and ist associated eigenvector
		/** \param minEigenVector output vector to store min eigen vector
		\return min eigen value
		**/
		Scalar getMinEigenValueAndVector(Scalar minEigenVector[]) const
		{
			assert(eigenValues);

			unsigned i,minIndex=0;
			for (i=1;i<m_matrixSize;++i)
				if (eigenValues[i]<eigenValues[minIndex])
					minIndex=i;

			return getEigenValueAndVector(minIndex,minEigenVector);
		}

		//! Returns the given eigenvalue and ist associated eigenvector
		/** \param index eigen requested value/vector index (< matrix size)
		\param eigenVector vector (size = matrix size) for output (or 0 if eigen vector is not requested)
		\return requested eigen value
		**/
		Scalar getEigenValueAndVector(unsigned index, Scalar* eigenVector = 0) const
		{
			assert(eigenValues);
			assert(index < m_matrixSize);

			if (eigenVector)
				for (unsigned i=0;i<m_matrixSize;++i)
					eigenVector[i]=m_values[i][index];

			return eigenValues[index];
		}

	protected:

		//! Internal initialization
		void init(unsigned size)
		{
			m_matrixSize = size;
			matrixSquareSize = m_matrixSize*m_matrixSize;

			m_values = 0;
			eigenValues=0; //no eigeinvalues associated by default

			if (size>0)
			{
				m_values = new Scalar*[m_matrixSize];
				for (unsigned i=0;i<m_matrixSize;i++)
				{
					m_values[i] = new Scalar[m_matrixSize];
					memset(m_values[i],0,sizeof(Scalar)*m_matrixSize);
				}
			}
		}

		//! Instantiates an array to store eigen values
		/** Warning: sets this array to zero, even if it was already instantiated!
		**/
		void enableEigenValues()
		{
			if (!eigenValues && m_matrixSize>0)
				eigenValues = new Scalar[m_matrixSize];
		}

		//! Computes sub-matrix determinant
		double computeSubDet(Scalar** mat, unsigned matSize) const
		{
			double subDet = 0;

			if (matSize == 2)
			{
				return (double)(mat[0][0] * mat[1][1] - mat[0][1] * mat[1][0]);
			}
			else
			{
				unsigned i,k,line;
				Scalar** subMat = new Scalar*[matSize-1];
				double sign = 1.0;

				for (line=0;line<matSize;line++)
				{
					k=0;
					for (i=0;i<matSize;i++)
						if (i!=line)
							subMat[k++] = mat[i]+1;

					subDet += (double)mat[line][0] * computeSubDet(subMat,matSize-1) * sign;
					sign = -sign;
				}

				delete[] subMat;
			}

			return subDet;
		}

		//! Matrix size
		unsigned m_matrixSize;

		//! Matrix square-size
		unsigned matrixSquareSize;

		//! Eigenvalues
		/** Typically associated to an eigen matrix!
		**/
		Scalar* eigenValues;
	};

	//! Default CC square matrix type (PointCoordinateType)
	typedef MatrixTpl<PointCoordinateType> SquareMatrix;

	//! Float square matrix type
	typedef MatrixTpl<float> SquareMatrixf;

	//! Double square matrix type
	typedef MatrixTpl<double> SquareMatrixd;

} //namespace

#endif
