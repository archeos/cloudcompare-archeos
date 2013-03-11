/****************************************************************************
** Meta object code from reading C++ file 'ccviewer.h'
**
** Created: Sun Mar 10 15:48:32 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ccViewer/ccviewer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccviewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ccViewer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
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
     232,    9,    9,    9, 0x09,
     264,    9,    9,    9, 0x09,
     299,    9,    9,    9, 0x09,
     322,    9,    9,    9, 0x09,
     338,    9,    9,    9, 0x09,
     365,    9,    9,    9, 0x09,
     380,    9,    9,    9, 0x09,
     396,    9,    9,    9, 0x09,
     409,    9,    9,    9, 0x09,
     423,    9,    9,    9, 0x09,
     437,    9,    9,    9, 0x09,
     452,    9,    9,    9, 0x09,
     476,    9,    9,    9, 0x09,
     501,    9,    9,    9, 0x09,
     525,    9,    9,    9, 0x09,
     551,    9,    9,    9, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ccViewer[] = {
    "ccViewer\0\0filenames\0addToDB(QStringList)\0"
    "showDisplayParameters()\0updateDisplay()\0"
    "uniqueID\0selectEntity(int)\0"
    "doActionDeleteSelectedEntity()\0"
    "doActionEditCamera()\0toggleSunLight(bool)\0"
    "toggleCustomLight(bool)\0"
    "togglePerspectiveOff(bool)\0"
    "toggleCenteredPerspective(bool)\0"
    "toggleViewerBasedPerspective(bool)\0"
    "toggleFullScreen(bool)\0doActionAbout()\0"
    "doActionDisplayShortcuts()\0setFrontView()\0"
    "setBottomView()\0setTopView()\0setBackView()\0"
    "setLeftView()\0setRightView()\0"
    "toggleColorsShown(bool)\0"
    "toggleNormalsShown(bool)\0"
    "toggleScalarShown(bool)\0"
    "toggleColorbarShown(bool)\0"
    "changeCurrentScalarField(bool)\0"
};

void ccViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ccViewer *_t = static_cast<ccViewer *>(_o);
        switch (_id) {
        case 0: _t->addToDB((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 1: _t->showDisplayParameters(); break;
        case 2: _t->updateDisplay(); break;
        case 3: _t->selectEntity((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->doActionDeleteSelectedEntity(); break;
        case 5: _t->doActionEditCamera(); break;
        case 6: _t->toggleSunLight((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->toggleCustomLight((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->togglePerspectiveOff((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->toggleCenteredPerspective((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->toggleViewerBasedPerspective((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->toggleFullScreen((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->doActionAbout(); break;
        case 13: _t->doActionDisplayShortcuts(); break;
        case 14: _t->setFrontView(); break;
        case 15: _t->setBottomView(); break;
        case 16: _t->setTopView(); break;
        case 17: _t->setBackView(); break;
        case 18: _t->setLeftView(); break;
        case 19: _t->setRightView(); break;
        case 20: _t->toggleColorsShown((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->toggleNormalsShown((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->toggleScalarShown((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->toggleColorbarShown((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->changeCurrentScalarField((*reinterpret_cast< bool(*)>(_a[1]))); break;
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
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
