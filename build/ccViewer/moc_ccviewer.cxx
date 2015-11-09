/****************************************************************************
** Meta object code from reading C++ file 'ccviewer.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ccViewer/ccviewer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccviewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ccViewer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      42,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   10,    9,    9, 0x0a,
      41,    9,    9,    9, 0x09,
      65,    9,    9,    9, 0x09,
      90,   81,    9,    9, 0x09,
     108,    9,    9,    9, 0x09,
     139,    9,    9,    9, 0x09,
     160,    9,    9,    9, 0x09,
     181,    9,    9,    9, 0x09,
     205,    9,    9,    9, 0x09,
     228,    9,    9,    9, 0x09,
     251,    9,    9,    9, 0x09,
     281,    9,    9,    9, 0x09,
     297,    9,    9,    9, 0x09,
     324,    9,    9,    9, 0x09,
     343,    9,    9,    9, 0x09,
     366,    9,    9,    9, 0x09,
     380,    9,    9,    9, 0x09,
     395,    9,    9,    9, 0x09,
     424,    9,    9,    9, 0x09,
     451,    9,    9,    9, 0x09,
     467,    9,    9,    9, 0x09,
     490,    9,    9,    9, 0x09,
     505,    9,    9,    9, 0x09,
     521,    9,    9,    9, 0x09,
     534,    9,    9,    9, 0x09,
     548,    9,    9,    9, 0x09,
     562,    9,    9,    9, 0x09,
     577,    9,    9,    9, 0x09,
     591,    9,    9,    9, 0x09,
     605,    9,    9,    9, 0x09,
     629,    9,    9,    9, 0x09,
     654,    9,    9,    9, 0x09,
     681,    9,    9,    9, 0x09,
     705,    9,    9,    9, 0x09,
     731,    9,    9,    9, 0x09,
     762,    9,    9,    9, 0x09,
     797,    9,    9,    9, 0x09,
     817,    9,    9,    9, 0x09,
     839,    9,    9,    9, 0x09,
     865,  859,    9,    9, 0x09,
     885,    9,    9,    9, 0x09,
     904,    9,    9,    9, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ccViewer[] = {
    "ccViewer\0\0filenames\0addToDB(QStringList)\0"
    "showDisplayParameters()\0updateDisplay()\0"
    "uniqueID\0selectEntity(int)\0"
    "doActionDeleteSelectedEntity()\0"
    "doActionEditCamera()\0toggleSunLight(bool)\0"
    "toggleCustomLight(bool)\0toggleStereoMode(bool)\0"
    "toggleFullScreen(bool)\0"
    "toggleRotationAboutVertAxis()\0"
    "doActionAbout()\0doActionDisplayShortcuts()\0"
    "setPivotAlwaysOn()\0setPivotRotationOnly()\0"
    "setPivotOff()\0setOrthoView()\0"
    "setCenteredPerspectiveView()\0"
    "setViewerPerspectiveView()\0setGlobalZoom()\0"
    "zoomOnSelectedEntity()\0setFrontView()\0"
    "setBottomView()\0setTopView()\0setBackView()\0"
    "setLeftView()\0setRightView()\0setIsoView1()\0"
    "setIsoView2()\0toggleColorsShown(bool)\0"
    "toggleNormalsShown(bool)\0"
    "toggleMaterialsShown(bool)\0"
    "toggleScalarShown(bool)\0"
    "toggleColorbarShown(bool)\0"
    "changeCurrentScalarField(bool)\0"
    "on3DMouseMove(std::vector<float>&)\0"
    "on3DMouseKeyUp(int)\0on3DMouseKeyDown(int)\0"
    "on3DMouseReleased()\0state\0enable3DMouse(bool)\0"
    "doEnableGLFilter()\0doDisableGLFilter()\0"
};

void ccViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ccViewer *_t = static_cast<ccViewer *>(_o);
        switch (_id) {
        case 0: _t->addToDB((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 1: _t->showDisplayParameters(); break;
        case 2: _t->updateDisplay(); break;
        case 3: _t->selectEntity((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->doActionDeleteSelectedEntity(); break;
        case 5: _t->doActionEditCamera(); break;
        case 6: _t->toggleSunLight((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->toggleCustomLight((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->toggleStereoMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->toggleFullScreen((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->toggleRotationAboutVertAxis(); break;
        case 11: _t->doActionAbout(); break;
        case 12: _t->doActionDisplayShortcuts(); break;
        case 13: _t->setPivotAlwaysOn(); break;
        case 14: _t->setPivotRotationOnly(); break;
        case 15: _t->setPivotOff(); break;
        case 16: _t->setOrthoView(); break;
        case 17: _t->setCenteredPerspectiveView(); break;
        case 18: _t->setViewerPerspectiveView(); break;
        case 19: _t->setGlobalZoom(); break;
        case 20: _t->zoomOnSelectedEntity(); break;
        case 21: _t->setFrontView(); break;
        case 22: _t->setBottomView(); break;
        case 23: _t->setTopView(); break;
        case 24: _t->setBackView(); break;
        case 25: _t->setLeftView(); break;
        case 26: _t->setRightView(); break;
        case 27: _t->setIsoView1(); break;
        case 28: _t->setIsoView2(); break;
        case 29: _t->toggleColorsShown((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: _t->toggleNormalsShown((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 31: _t->toggleMaterialsShown((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 32: _t->toggleScalarShown((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 33: _t->toggleColorbarShown((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 34: _t->changeCurrentScalarField((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 35: _t->on3DMouseMove((*reinterpret_cast< std::vector<float>(*)>(_a[1]))); break;
        case 36: _t->on3DMouseKeyUp((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 37: _t->on3DMouseKeyDown((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 38: _t->on3DMouseReleased(); break;
        case 39: _t->enable3DMouse((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 40: _t->doEnableGLFilter(); break;
        case 41: _t->doDisableGLFilter(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ccViewer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ccViewer::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ccViewer,
      qt_meta_data_ccViewer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ccViewer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ccViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ccViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ccViewer))
        return static_cast<void*>(const_cast< ccViewer*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ccViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 42)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 42;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
