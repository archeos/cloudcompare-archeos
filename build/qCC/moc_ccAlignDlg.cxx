/****************************************************************************
** Meta object code from reading C++ file 'ccAlignDlg.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qCC/ccAlignDlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccAlignDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ccAlignDlg[] = {

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
      12,   11,   11,   11, 0x09,
      31,   11,   11,   11, 0x09,
      53,   11,   11,   11, 0x09,
      80,   74,   11,   11, 0x09,
     113,   74,   11,   11, 0x09,
     145,   11,   11,   11, 0x09,
     167,  161,   11,   11, 0x09,
     199,  193,   11,   11, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ccAlignDlg[] = {
    "ccAlignDlg\0\0swapModelAndData()\0"
    "modelSliderReleased()\0dataSliderReleased()\0"
    "value\0modelSamplingRateChanged(double)\0"
    "dataSamplingRateChanged(double)\0"
    "estimateDelta()\0index\0changeSamplingMethod(int)\0"
    "activ\0toggleNbMaxCandidates(bool)\0"
};

void ccAlignDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ccAlignDlg *_t = static_cast<ccAlignDlg *>(_o);
        switch (_id) {
        case 0: _t->swapModelAndData(); break;
        case 1: _t->modelSliderReleased(); break;
        case 2: _t->dataSliderReleased(); break;
        case 3: _t->modelSamplingRateChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->dataSamplingRateChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->estimateDelta(); break;
        case 6: _t->changeSamplingMethod((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->toggleNbMaxCandidates((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ccAlignDlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ccAlignDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ccAlignDlg,
      qt_meta_data_ccAlignDlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ccAlignDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ccAlignDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ccAlignDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ccAlignDlg))
        return static_cast<void*>(const_cast< ccAlignDlg*>(this));
    if (!strcmp(_clname, "Ui::AlignDialog"))
        return static_cast< Ui::AlignDialog*>(const_cast< ccAlignDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int ccAlignDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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