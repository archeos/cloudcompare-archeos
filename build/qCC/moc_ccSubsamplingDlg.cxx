/****************************************************************************
** Meta object code from reading C++ file 'ccSubsamplingDlg.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qCC/ccSubsamplingDlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccSubsamplingDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ccSubsamplingDlg[] = {

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
      28,   18,   17,   17, 0x09,
      51,   45,   17,   17, 0x09,
      85,   79,   17,   17, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ccSubsamplingDlg[] = {
    "ccSubsamplingDlg\0\0sliderPos\0"
    "sliderMoved(int)\0value\0"
    "samplingRateChanged(double)\0index\0"
    "changeSamplingMethod(int)\0"
};

void ccSubsamplingDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ccSubsamplingDlg *_t = static_cast<ccSubsamplingDlg *>(_o);
        switch (_id) {
        case 0: _t->sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->samplingRateChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->changeSamplingMethod((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ccSubsamplingDlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ccSubsamplingDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ccSubsamplingDlg,
      qt_meta_data_ccSubsamplingDlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ccSubsamplingDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ccSubsamplingDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ccSubsamplingDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ccSubsamplingDlg))
        return static_cast<void*>(const_cast< ccSubsamplingDlg*>(this));
    if (!strcmp(_clname, "Ui::SubsamplingDialog"))
        return static_cast< Ui::SubsamplingDialog*>(const_cast< ccSubsamplingDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int ccSubsamplingDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
