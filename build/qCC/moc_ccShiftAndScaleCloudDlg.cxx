/****************************************************************************
** Meta object code from reading C++ file 'ccShiftAndScaleCloudDlg.h'
**
** Created: Sun Mar 10 15:48:32 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qCC/ccShiftAndScaleCloudDlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccShiftAndScaleCloudDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ccShiftAndScaleCloudDlg[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      32,   25,   24,   24, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ccShiftAndScaleCloudDlg[] = {
    "ccShiftAndScaleCloudDlg\0\0button\0"
    "onClick(QAbstractButton*)\0"
};

void ccShiftAndScaleCloudDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ccShiftAndScaleCloudDlg *_t = static_cast<ccShiftAndScaleCloudDlg *>(_o);
        switch (_id) {
        case 0: _t->onClick((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
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
    if (!strcmp(_clname, "Ui::ShiftAndScaleCloudDlg"))
        return static_cast< Ui::ShiftAndScaleCloudDlg*>(const_cast< ccShiftAndScaleCloudDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int ccShiftAndScaleCloudDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
