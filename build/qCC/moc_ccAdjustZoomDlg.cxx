/****************************************************************************
** Meta object code from reading C++ file 'ccAdjustZoomDlg.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qCC/ccAdjustZoomDlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccAdjustZoomDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ccAdjustZoomDlg[] = {

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
      17,   16,   16,   16, 0x09,
      39,   16,   16,   16, 0x09,
      66,   16,   16,   16, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ccAdjustZoomDlg[] = {
    "ccAdjustZoomDlg\0\0onZoomChanged(double)\0"
    "onPixelSizeChanged(double)\0"
    "onPixelCountChanged(int)\0"
};

void ccAdjustZoomDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ccAdjustZoomDlg *_t = static_cast<ccAdjustZoomDlg *>(_o);
        switch (_id) {
        case 0: _t->onZoomChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->onPixelSizeChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->onPixelCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ccAdjustZoomDlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ccAdjustZoomDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ccAdjustZoomDlg,
      qt_meta_data_ccAdjustZoomDlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ccAdjustZoomDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ccAdjustZoomDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ccAdjustZoomDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ccAdjustZoomDlg))
        return static_cast<void*>(const_cast< ccAdjustZoomDlg*>(this));
    if (!strcmp(_clname, "Ui::AdjustZoomDialog"))
        return static_cast< Ui::AdjustZoomDialog*>(const_cast< ccAdjustZoomDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int ccAdjustZoomDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
