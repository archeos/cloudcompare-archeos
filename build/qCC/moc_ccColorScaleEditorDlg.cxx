/****************************************************************************
** Meta object code from reading C++ file 'ccColorScaleEditorDlg.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qCC/ccColorScaleEditorDlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccColorScaleEditorDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ccColorScaleEditorDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      26,   25,   25,   25, 0x09,
      49,   25,   25,   25, 0x09,
      74,   25,   25,   25, 0x09,
      94,   25,   25,   25, 0x09,
     114,   25,   25,   25, 0x09,
     136,   25,   25,   25, 0x09,
     162,   25,   25,   25, 0x09,
     194,   25,   25,   25, 0x09,
     222,   25,   25,   25, 0x09,
     251,   25,   25,   25, 0x09,
     275,   25,  270,   25, 0x09,
     294,   25,   25,   25, 0x09,
     315,   25,   25,   25, 0x09,
     336,   25,   25,   25, 0x09,
     357,   25,   25,   25, 0x09,
     371,   25,   25,   25, 0x09,
     388,   25,   25,   25, 0x09,
     398,   25,   25,   25, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ccColorScaleEditorDialog[] = {
    "ccColorScaleEditorDialog\0\0"
    "colorScaleChanged(int)\0relativeModeChanged(int)\0"
    "onStepSelected(int)\0onStepModified(int)\0"
    "deletecSelectedStep()\0changeSelectedStepColor()\0"
    "changeSelectedStepValue(double)\0"
    "onCustomLabelsListChanged()\0"
    "toggleCustomLabelsList(bool)\0"
    "copyCurrentScale()\0bool\0saveCurrentScale()\0"
    "deleteCurrentScale()\0renameCurrentScale()\0"
    "exportCurrentScale()\0importScale()\0"
    "createNewScale()\0onApply()\0onClose()\0"
};

void ccColorScaleEditorDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ccColorScaleEditorDialog *_t = static_cast<ccColorScaleEditorDialog *>(_o);
        switch (_id) {
        case 0: _t->colorScaleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->relativeModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->onStepSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onStepModified((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->deletecSelectedStep(); break;
        case 5: _t->changeSelectedStepColor(); break;
        case 6: _t->changeSelectedStepValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->onCustomLabelsListChanged(); break;
        case 8: _t->toggleCustomLabelsList((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->copyCurrentScale(); break;
        case 10: { bool _r = _t->saveCurrentScale();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: _t->deleteCurrentScale(); break;
        case 12: _t->renameCurrentScale(); break;
        case 13: _t->exportCurrentScale(); break;
        case 14: _t->importScale(); break;
        case 15: _t->createNewScale(); break;
        case 16: _t->onApply(); break;
        case 17: _t->onClose(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ccColorScaleEditorDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ccColorScaleEditorDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ccColorScaleEditorDialog,
      qt_meta_data_ccColorScaleEditorDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ccColorScaleEditorDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ccColorScaleEditorDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ccColorScaleEditorDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ccColorScaleEditorDialog))
        return static_cast<void*>(const_cast< ccColorScaleEditorDialog*>(this));
    if (!strcmp(_clname, "Ui::ColorScaleEditorDlg"))
        return static_cast< Ui::ColorScaleEditorDlg*>(const_cast< ccColorScaleEditorDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ccColorScaleEditorDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
