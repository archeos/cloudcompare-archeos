/****************************************************************************
** Meta object code from reading C++ file 'ccUnrollDlg.h'
**
** Created: Sun Mar 10 15:48:33 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qCC/ccUnrollDlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccUnrollDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ccUnrollDlg[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   13,   12,   12, 0x09,
      41,   13,   12,   12, 0x09,
      78,   67,   12,   12, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ccUnrollDlg[] = {
    "ccUnrollDlg\0\0index\0shapeTypeChanged(int)\0"
    "axisDimensionChanged(int)\0checkState\0"
    "axisAutoStateChanged(int)\0"
};

void ccUnrollDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ccUnrollDlg *_t = static_cast<ccUnrollDlg *>(_o);
        switch (_id) {
        case 0: _t->shapeTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->axisDimensionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->axisAutoStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ccUnrollDlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ccUnrollDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ccUnrollDlg,
      qt_meta_data_ccUnrollDlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ccUnrollDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ccUnrollDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ccUnrollDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ccUnrollDlg))
        return static_cast<void*>(const_cast< ccUnrollDlg*>(this));
    if (!strcmp(_clname, "Ui::UnrollDialog"))
        return static_cast< Ui::UnrollDialog*>(const_cast< ccUnrollDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int ccUnrollDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
