/****************************************************************************
** Meta object code from reading C++ file 'ccBoundingBoxEditorDlg.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qCC/ccBoundingBoxEditorDlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccBoundingBoxEditorDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ccBoundingBoxEditorDlg[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      28,   23,   24,   23, 0x0a,
      35,   23,   23,   23, 0x09,
      61,   23,   23,   23, 0x09,
      78,   23,   23,   23, 0x09,
      92,   23,   23,   23, 0x09,
     101,   23,   23,   23, 0x09,
     120,   23,   23,   23, 0x09,
     141,   23,   23,   23, 0x09,
     162,   23,   23,   23, 0x09,
     189,  183,   23,   23, 0x09,
     215,   23,   23,   23, 0x29,
     235,  183,   23,   23, 0x09,
     255,   23,   23,   23, 0x29,

       0        // eod
};

static const char qt_meta_stringdata_ccBoundingBoxEditorDlg[] = {
    "ccBoundingBoxEditorDlg\0\0int\0exec()\0"
    "squareModeActivated(bool)\0resetToDefault()\0"
    "resetToLast()\0cancel()\0saveBoxAndAccept()\0"
    "updateXWidth(double)\0updateYWidth(double)\0"
    "updateZWidth(double)\0dummy\0"
    "updateCurrentBBox(double)\0updateCurrentBBox()\0"
    "reflectChanges(int)\0reflectChanges()\0"
};

void ccBoundingBoxEditorDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ccBoundingBoxEditorDlg *_t = static_cast<ccBoundingBoxEditorDlg *>(_o);
        switch (_id) {
        case 0: { int _r = _t->exec();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: _t->squareModeActivated((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->resetToDefault(); break;
        case 3: _t->resetToLast(); break;
        case 4: _t->cancel(); break;
        case 5: _t->saveBoxAndAccept(); break;
        case 6: _t->updateXWidth((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->updateYWidth((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->updateZWidth((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->updateCurrentBBox((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->updateCurrentBBox(); break;
        case 11: _t->reflectChanges((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->reflectChanges(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ccBoundingBoxEditorDlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ccBoundingBoxEditorDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ccBoundingBoxEditorDlg,
      qt_meta_data_ccBoundingBoxEditorDlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ccBoundingBoxEditorDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ccBoundingBoxEditorDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ccBoundingBoxEditorDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ccBoundingBoxEditorDlg))
        return static_cast<void*>(const_cast< ccBoundingBoxEditorDlg*>(this));
    if (!strcmp(_clname, "Ui::BoundingBoxEditorDialog"))
        return static_cast< Ui::BoundingBoxEditorDialog*>(const_cast< ccBoundingBoxEditorDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int ccBoundingBoxEditorDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
