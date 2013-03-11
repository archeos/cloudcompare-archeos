/****************************************************************************
** Meta object code from reading C++ file 'ccPointListPickingDlg.h'
**
** Created: Sun Mar 10 15:48:32 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qCC/ccPointListPickingDlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccPointListPickingDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ccPointListPickingDlg[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x09,
      38,   22,   22,   22, 0x09,
      54,   22,   22,   22, 0x09,
      73,   22,   22,   22, 0x09,
      91,   22,   22,   22, 0x09,
     111,   22,   22,   22, 0x09,
     132,   22,   22,   22, 0x09,
     155,   22,   22,   22, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ccPointListPickingDlg[] = {
    "ccPointListPickingDlg\0\0applyAndExit()\0"
    "cancelAndExit()\0exportToNewCloud()\0"
    "removeLastEntry()\0exportToASCII_xyz()\0"
    "exportToASCII_ixyz()\0markerSizeChanged(int)\0"
    "startIndexChanged(int)\0"
};

void ccPointListPickingDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ccPointListPickingDlg *_t = static_cast<ccPointListPickingDlg *>(_o);
        switch (_id) {
        case 0: _t->applyAndExit(); break;
        case 1: _t->cancelAndExit(); break;
        case 2: _t->exportToNewCloud(); break;
        case 3: _t->removeLastEntry(); break;
        case 4: _t->exportToASCII_xyz(); break;
        case 5: _t->exportToASCII_ixyz(); break;
        case 6: _t->markerSizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->startIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ccPointListPickingDlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ccPointListPickingDlg::staticMetaObject = {
    { &ccPointPickingGenericInterface::staticMetaObject, qt_meta_stringdata_ccPointListPickingDlg,
      qt_meta_data_ccPointListPickingDlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ccPointListPickingDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ccPointListPickingDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ccPointListPickingDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ccPointListPickingDlg))
        return static_cast<void*>(const_cast< ccPointListPickingDlg*>(this));
    if (!strcmp(_clname, "Ui::PointListPickingDlg"))
        return static_cast< Ui::PointListPickingDlg*>(const_cast< ccPointListPickingDlg*>(this));
    return ccPointPickingGenericInterface::qt_metacast(_clname);
}

int ccPointListPickingDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ccPointPickingGenericInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
