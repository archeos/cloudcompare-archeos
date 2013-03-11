/****************************************************************************
** Meta object code from reading C++ file 'ccGLWindow.h'
**
** Created: Sun Mar 10 15:48:33 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qCC/ccGLWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccGLWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ccGLWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      16,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   12,   11,   11, 0x05,
      78,   49,   11,   11, 0x05,
     115,  108,   11,   11, 0x05,
     157,  142,   11,   11, 0x05,
     188,   11,   11,   11, 0x05,
     228,  217,   11,   11, 0x05,
     255,  247,   11,   11, 0x05,
     281,  279,   11,   11, 0x05,
     304,  108,   11,   11, 0x05,
     327,  325,   11,   11, 0x05,
     354,  325,   11,   11, 0x05,
     385,  382,   11,   11, 0x05,
     422,   11,   11,   11, 0x05,
     439,   11,   11,   11, 0x05,
     461,  451,   11,   11, 0x05,
     491,  487,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     512,   11,   11,   11, 0x0a,
     525,   11,   11,   11, 0x0a,
     541,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ccGLWindow[] = {
    "ccGLWindow\0\0uniqueID\0entitySelectionChanged(int)\0"
    "cloudUniqueID,pointIndex,x,y\0"
    "pointPicked(int,uint,int,int)\0rotMat\0"
    "viewMatRotated(ccGLMatrix)\0newBaseViewMat\0"
    "baseViewMatChanged(ccGLMatrix)\0"
    "pivotPointChanged(CCVector3)\0zoomFactor\0"
    "zoomChanged(float)\0ddx,ddy\0"
    "panChanged(float,float)\0t\0"
    "translation(CCVector3)\0rotation(ccGLMatrix)\0"
    ",\0leftButtonClicked(int,int)\0"
    "rightButtonClicked(int,int)\0,,\0"
    "mouseMoved(int,int,Qt::MouseButtons)\0"
    "buttonReleased()\0drawing3D()\0filenames\0"
    "filesDropped(QStringList)\0obj\0"
    "newLabel(ccHObject*)\0zoomGlobal()\0"
    "testFrameRate()\0redraw()\0"
};

void ccGLWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ccGLWindow *_t = static_cast<ccGLWindow *>(_o);
        switch (_id) {
        case 0: _t->entitySelectionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->pointPicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 2: _t->viewMatRotated((*reinterpret_cast< const ccGLMatrix(*)>(_a[1]))); break;
        case 3: _t->baseViewMatChanged((*reinterpret_cast< const ccGLMatrix(*)>(_a[1]))); break;
        case 4: _t->pivotPointChanged((*reinterpret_cast< const CCVector3(*)>(_a[1]))); break;
        case 5: _t->zoomChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->panChanged((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 7: _t->translation((*reinterpret_cast< const CCVector3(*)>(_a[1]))); break;
        case 8: _t->rotation((*reinterpret_cast< const ccGLMatrix(*)>(_a[1]))); break;
        case 9: _t->leftButtonClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->rightButtonClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->mouseMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::MouseButtons(*)>(_a[3]))); break;
        case 12: _t->buttonReleased(); break;
        case 13: _t->drawing3D(); break;
        case 14: _t->filesDropped((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 15: _t->newLabel((*reinterpret_cast< ccHObject*(*)>(_a[1]))); break;
        case 16: _t->zoomGlobal(); break;
        case 17: _t->testFrameRate(); break;
        case 18: _t->redraw(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ccGLWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ccGLWindow::staticMetaObject = {
    { &QGLWidget::staticMetaObject, qt_meta_stringdata_ccGLWindow,
      qt_meta_data_ccGLWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ccGLWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ccGLWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ccGLWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ccGLWindow))
        return static_cast<void*>(const_cast< ccGLWindow*>(this));
    if (!strcmp(_clname, "ccGenericGLDisplay"))
        return static_cast< ccGenericGLDisplay*>(const_cast< ccGLWindow*>(this));
    return QGLWidget::qt_metacast(_clname);
}

int ccGLWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void ccGLWindow::entitySelectionChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ccGLWindow::pointPicked(int _t1, unsigned  _t2, int _t3, int _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ccGLWindow::viewMatRotated(const ccGLMatrix & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ccGLWindow::baseViewMatChanged(const ccGLMatrix & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ccGLWindow::pivotPointChanged(const CCVector3 & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ccGLWindow::zoomChanged(float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ccGLWindow::panChanged(float _t1, float _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ccGLWindow::translation(const CCVector3 & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void ccGLWindow::rotation(const ccGLMatrix & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void ccGLWindow::leftButtonClicked(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void ccGLWindow::rightButtonClicked(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void ccGLWindow::mouseMoved(int _t1, int _t2, Qt::MouseButtons _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void ccGLWindow::buttonReleased()
{
    QMetaObject::activate(this, &staticMetaObject, 12, 0);
}

// SIGNAL 13
void ccGLWindow::drawing3D()
{
    QMetaObject::activate(this, &staticMetaObject, 13, 0);
}

// SIGNAL 14
void ccGLWindow::filesDropped(const QStringList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void ccGLWindow::newLabel(ccHObject * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}
QT_END_MOC_NAMESPACE
