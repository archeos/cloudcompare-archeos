##################################
#	Compilation sous Windows
##################################

Avant de compiler la documentation assurez-vous que :

1- Vous disposez bien de l'executable pdflatex.exe et de tous les binaires n�cessaires � son execution. Si vous souhaitez
int�grer l'index au document (version finale), vous devez de plus disposer de l'executable makeindex.exe.

2- WINDOWS est capable de trouver l'executable pdflatex. Pour cela, assurez-vous que la variable
d'environnement PATH contient bien le chemin vers cet exectuable (si ce n'est pas le cas, ajoutez-le "� la main")

3- vous disposez de tous les packages latex utilis�s dans la documentation � savoir :
	+ helvet
	+ fontenc
	+ inputenc
	+ geometry
	+ makeindex
	+ array
	+ color
	+ graphicx
	+ longtable
	+ bbding
	+ hyperref
	+ fancyhdr
Les 6 premiers packages cit�s ci-dessus devraient normalement �tre disponnibles sur votre ordinateur, quant aux autres, tout d�pend de la configuration de votre installation latex. Il est probable que vous n'ayez ni longtable, ni bbding, ni hyperref,
ni fancyhdr. Si vous utilisez miktex, vous pouvez t�l�charger et installer les packages manquants gr�ce � l'utilitaire
"Browse package" (en renseignant le nom du package dans le champ filtre)


Si toutes ces conditions sont v�rifi�es, vous pouvez compiler la documentation en cliquant simplement sur compile.bat. La documentation est alors g�n�r�e au format PDF : pdf/Documentation.pdf. L'ensemble des fichiers interm�diaires g�n�r�s par pdflatex sont stock�s dans le repertoire tmp.


Attention : il est parfois necessaire de compiler la documentation plusieurs fois pour que la table des mati�res soit construite correctement.

Pour generer le document dans sa version finale (avec index), lancez le script de compilation compileFinalVersion.bat.
Ce script g�re le nombre de passes necessaires, et n'a donc � �tre exectut� qu'une seule fois pour obtenir la version finale
du document.



#######################
# Autres syst�mes d'exploitation
#######################

La d�marche est la m�me que sous windows : assurez vous d'avoir les programmes permettant de compiler les fichiers latex,
ainsi que tous les packages list� ci-avant.
Il vous suffit ensuite de compiler Document.tex (avec pdflatex par exemple).
Si vous souhaitez que l'index figure dans la documentation, vous devez executer makeindex, en lan�ant par exemple la commande :
makeindex -s IndexStyle.ist
puis recompiler Document.tex pour int�grer l'index au document.