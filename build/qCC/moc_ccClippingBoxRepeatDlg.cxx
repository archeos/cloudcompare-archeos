/****************************************************************************
** Meta object code from reading C++ file 'ccClippingBoxRepeatDlg.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qCC/ccClippingBoxRepeatDlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccClippingBoxRepeatDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ccClippingBoxRepeatDlg[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x09,
      43,   23,   23,   23, 0x09,
      63,   23,   23,   23, 0x09,
      83,   23,   23,   23, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ccClippingBoxRepeatDlg[] = {
    "ccClippingBoxRepeatDlg\0\0onDimChecked(bool)\0"
    "onDimXChecked(bool)\0onDimYChecked(bool)\0"
    "onDimZChecked(bool)\0"
};

void ccClippingBoxRepeatDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ccClippingBoxRepeatDlg *_t = static_cast<ccClippingBoxRepeatDlg *>(_o);
        switch (_id) {
        case 0: _t->onDimChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->onDimXChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->onDimYChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->onDimZChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ccClippingBoxRepeatDlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ccClippingBoxRepeatDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ccClippingBoxRepeatDlg,
      qt_meta_data_ccClippingBoxRepeatDlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ccClippingBoxRepeatDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ccClippingBoxRepeatDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ccClippingBoxRepeatDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ccClippingBoxRepeatDlg))
        return static_cast<void*>(const_cast< ccClippingBoxRepeatDlg*>(this));
    if (!strcmp(_clname, "Ui::ClippingBoxRepeatDlg"))
        return static_cast< Ui::ClippingBoxRepeatDlg*>(const_cast< ccClippingBoxRepeatDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int ccClippingBoxRepeatDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
