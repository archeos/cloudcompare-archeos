/****************************************************************************
** Meta object code from reading C++ file 'ccShiftAndScaleCloudDlg.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../libs/qCC_io/ccShiftAndScaleCloudDlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccShiftAndScaleCloudDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ccShiftAndScaleCloudDlg[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x09,
      49,   24,   24,   24, 0x09,
      89,   82,   24,   24, 0x09,
     115,   24,   24,   24, 0x09,
     145,   24,   24,   24, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ccShiftAndScaleCloudDlg[] = {
    "ccShiftAndScaleCloudDlg\0\0"
    "onLoadIndexChanged(int)\0"
    "onGlobalPosCheckBoxToggled(bool)\0"
    "button\0onClick(QAbstractButton*)\0"
    "updateGlobalAndLocalSystems()\0"
    "displayMoreInfo()\0"
};

void ccShiftAndScaleCloudDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ccShiftAndScaleCloudDlg *_t = static_cast<ccShiftAndScaleCloudDlg *>(_o);
        switch (_id) {
        case 0: _t->onLoadIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onGlobalPosCheckBoxToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->onClick((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 3: _t->updateGlobalAndLocalSystems(); break;
        case 4: _t->displayMoreInfo(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ccShiftAndScaleCloudDlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ccShiftAndScaleCloudDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ccShiftAndScaleCloudDlg,
      qt_meta_data_ccShiftAndScaleCloudDlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ccShiftAndScaleCloudDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ccShiftAndScaleCloudDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ccShiftAndScaleCloudDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ccShiftAndScaleCloudDlg))
        return static_cast<void*>(const_cast< ccShiftAndScaleCloudDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int ccShiftAndScaleCloudDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
