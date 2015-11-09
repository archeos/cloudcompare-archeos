/****************************************************************************
** Meta object code from reading C++ file 'ccNormalComputationDlg.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qCC/ccNormalComputationDlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccNormalComputationDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ccNormalComputationDlg[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      30,   24,   23,   23, 0x09,
      53,   23,   23,   23, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ccNormalComputationDlg[] = {
    "ccNormalComputationDlg\0\0index\0"
    "localModelChanged(int)\0autoEstimateRadius()\0"
};

void ccNormalComputationDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ccNormalComputationDlg *_t = static_cast<ccNormalComputationDlg *>(_o);
        switch (_id) {
        case 0: _t->localModelChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->autoEstimateRadius(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ccNormalComputationDlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ccNormalComputationDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ccNormalComputationDlg,
      qt_meta_data_ccNormalComputationDlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ccNormalComputationDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ccNormalComputationDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ccNormalComputationDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ccNormalComputationDlg))
        return static_cast<void*>(const_cast< ccNormalComputationDlg*>(this));
    if (!strcmp(_clname, "Ui::NormalComputationDlg"))
        return static_cast< Ui::NormalComputationDlg*>(const_cast< ccNormalComputationDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int ccNormalComputationDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
