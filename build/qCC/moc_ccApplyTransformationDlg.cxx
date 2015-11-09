/****************************************************************************
** Meta object code from reading C++ file 'ccApplyTransformationDlg.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qCC/ccApplyTransformationDlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccApplyTransformationDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ccApplyTransformationDlg[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      26,   25,   25,   25, 0x09,
      57,   25,   25,   25, 0x09,
      78,   25,   25,   25, 0x09,
     109,   25,   25,   25, 0x09,
     137,   25,   25,   25, 0x09,
     157,   25,   25,   25, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ccApplyTransformationDlg[] = {
    "ccApplyTransformationDlg\0\0"
    "checkMatrixValidityAndAccept()\0"
    "onMatrixTextChange()\0"
    "onRotAngleValueChanged(double)\0"
    "onEulerValueChanged(double)\0"
    "loadFromASCIIFile()\0loadFromClipboard()\0"
};

void ccApplyTransformationDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ccApplyTransformationDlg *_t = static_cast<ccApplyTransformationDlg *>(_o);
        switch (_id) {
        case 0: _t->checkMatrixValidityAndAccept(); break;
        case 1: _t->onMatrixTextChange(); break;
        case 2: _t->onRotAngleValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->onEulerValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->loadFromASCIIFile(); break;
        case 5: _t->loadFromClipboard(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ccApplyTransformationDlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ccApplyTransformationDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ccApplyTransformationDlg,
      qt_meta_data_ccApplyTransformationDlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ccApplyTransformationDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ccApplyTransformationDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ccApplyTransformationDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ccApplyTransformationDlg))
        return static_cast<void*>(const_cast< ccApplyTransformationDlg*>(this));
    if (!strcmp(_clname, "Ui::ApplyTransformationDialog"))
        return static_cast< Ui::ApplyTransformationDialog*>(const_cast< ccApplyTransformationDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int ccApplyTransformationDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
