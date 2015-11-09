/****************************************************************************
** Meta object code from reading C++ file 'ccGLWindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../libs/qCC_glWindow/ccGLWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccGLWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ccGLWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      32,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      23,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   12,   11,   11, 0x05,
      56,   49,   11,   11, 0x05,
     121,   96,   11,   11, 0x05,
     150,   96,   11,   11, 0x05,
     182,   11,   11,   11, 0x05,
     211,  204,   11,   11, 0x05,
     247,  239,   11,   11, 0x05,
     291,  276,   11,   11, 0x05,
     316,   11,   11,   11, 0x05,
     353,  342,   11,   11, 0x05,
     385,   11,   11,   11, 0x05,
     409,   11,   11,   11, 0x05,
     427,   11,   11,   11, 0x05,
     457,   11,   11,   11, 0x05,
     488,  486,   11,   11, 0x05,
     512,  204,   11,   11, 0x05,
     536,  534,   11,   11, 0x05,
     563,  534,   11,   11, 0x05,
     594,  591,   11,   11, 0x05,
     631,   11,   11,   11, 0x05,
     648,   11,   11,   11, 0x05,
     660,   11,   11,   11, 0x05,
     690,  686,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     711,   11,   11,   11, 0x0a,
     731,  724,   11,   11, 0x0a,
     744,   11,   11,   11, 0x2a,
     753,  276,   11,   11, 0x0a,
     773,   11,   11,   11, 0x0a,
     794,   11,   11,   11, 0x09,
     815,   11,   11,   11, 0x09,
     835,   96,   11,   11, 0x09,
     869,   11,   11,   11, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ccGLWindow[] = {
    "ccGLWindow\0\0uniqueID\0entitySelectionChanged(int)\0"
    "entIDs\0entitiesSelectionChanged(std::set<int>)\0"
    "entityID,subEntityID,x,y\0"
    "itemPicked(int,uint,int,int)\0"
    "itemPickedFast(int,int,int,int)\0"
    "fastPickingFinished()\0rotMat\0"
    "viewMatRotated(ccGLMatrixd)\0ddx,ddy\0"
    "cameraDisplaced(float,float)\0"
    "wheelDelta_deg\0mouseWheelRotated(float)\0"
    "perspectiveStateChanged()\0newViewMat\0"
    "baseViewMatChanged(ccGLMatrixd)\0"
    "pixelSizeChanged(float)\0fovChanged(float)\0"
    "pivotPointChanged(CCVector3d)\0"
    "cameraPosChanged(CCVector3d)\0t\0"
    "translation(CCVector3d)\0rotation(ccGLMatrixd)\0"
    ",\0leftButtonClicked(int,int)\0"
    "rightButtonClicked(int,int)\0,,\0"
    "mouseMoved(int,int,Qt::MouseButtons)\0"
    "buttonReleased()\0drawing3D()\0"
    "filesDropped(QStringList)\0obj\0"
    "newLabel(ccHObject*)\0zoomGlobal()\0"
    "only2D\0redraw(bool)\0redraw()\0"
    "onWheelEvent(float)\0startFrameRateTest()\0"
    "renderNextLODLevel()\0stopFrameRateTest()\0"
    "onItemPickedFast(int,int,int,int)\0"
    "checkScheduledRedraw()\0"
};

void ccGLWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ccGLWindow *_t = static_cast<ccGLWindow *>(_o);
        switch (_id) {
        case 0: _t->entitySelectionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->entitiesSelectionChanged((*reinterpret_cast< std::set<int>(*)>(_a[1]))); break;
        case 2: _t->itemPicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 3: _t->itemPickedFast((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 4: _t->fastPickingFinished(); break;
        case 5: _t->viewMatRotated((*reinterpret_cast< const ccGLMatrixd(*)>(_a[1]))); break;
        case 6: _t->cameraDisplaced((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 7: _t->mouseWheelRotated((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->perspectiveStateChanged(); break;
        case 9: _t->baseViewMatChanged((*reinterpret_cast< const ccGLMatrixd(*)>(_a[1]))); break;
        case 10: _t->pixelSizeChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 11: _t->fovChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 12: _t->pivotPointChanged((*reinterpret_cast< const CCVector3d(*)>(_a[1]))); break;
        case 13: _t->cameraPosChanged((*reinterpret_cast< const CCVector3d(*)>(_a[1]))); break;
        case 14: _t->translation((*reinterpret_cast< const CCVector3d(*)>(_a[1]))); break;
        case 15: _t->rotation((*reinterpret_cast< const ccGLMatrixd(*)>(_a[1]))); break;
        case 16: _t->leftButtonClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 17: _t->rightButtonClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 18: _t->mouseMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::MouseButtons(*)>(_a[3]))); break;
        case 19: _t->buttonReleased(); break;
        case 20: _t->drawing3D(); break;
        case 21: _t->filesDropped((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 22: _t->newLabel((*reinterpret_cast< ccHObject*(*)>(_a[1]))); break;
        case 23: _t->zoomGlobal(); break;
        case 24: _t->redraw((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->redraw(); break;
        case 26: _t->onWheelEvent((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 27: _t->startFrameRateTest(); break;
        case 28: _t->renderNextLODLevel(); break;
        case 29: _t->stopFrameRateTest(); break;
        case 30: _t->onItemPickedFast((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 31: _t->checkScheduledRedraw(); break;
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
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
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
void ccGLWindow::entitiesSelectionChanged(std::set<int> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ccGLWindow::itemPicked(int _t1, unsigned  _t2, int _t3, int _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ccGLWindow::itemPickedFast(int _t1, int _t2, int _t3, int _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ccGLWindow::fastPickingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void ccGLWindow::viewMatRotated(const ccGLMatrixd & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ccGLWindow::cameraDisplaced(float _t1, float _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ccGLWindow::mouseWheelRotated(float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void ccGLWindow::perspectiveStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}

// SIGNAL 9
void ccGLWindow::baseViewMatChanged(const ccGLMatrixd & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void ccGLWindow::pixelSizeChanged(float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void ccGLWindow::fovChanged(float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void ccGLWindow::pivotPointChanged(const CCVector3d & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void ccGLWindow::cameraPosChanged(const CCVector3d & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void ccGLWindow::translation(const CCVector3d & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void ccGLWindow::rotation(const ccGLMatrixd & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void ccGLWindow::leftButtonClicked(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void ccGLWindow::rightButtonClicked(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void ccGLWindow::mouseMoved(int _t1, int _t2, Qt::MouseButtons _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void ccGLWindow::buttonReleased()
{
    QMetaObject::activate(this, &staticMetaObject, 19, 0);
}

// SIGNAL 20
void ccGLWindow::drawing3D()
{
    QMetaObject::activate(this, &staticMetaObject, 20, 0);
}

// SIGNAL 21
void ccGLWindow::filesDropped(QStringList _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void ccGLWindow::newLabel(ccHObject * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}
QT_END_MOC_NAMESPACE
