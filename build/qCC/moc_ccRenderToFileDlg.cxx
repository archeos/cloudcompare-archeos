/****************************************************************************
** Meta object code from reading C++ file 'ccRenderToFileDlg.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qCC/ccRenderToFileDlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccRenderToFileDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ccRenderToFileDlg[] = {

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
      19,   18,   18,   18, 0x09,
      32,   18,   18,   18, 0x09,
      45,   18,   18,   18, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ccRenderToFileDlg[] = {
    "ccRenderToFileDlg\0\0chooseFile()\0"
    "updateInfo()\0saveSettings()\0"
};

void ccRenderToFileDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ccRenderToFileDlg *_t = static_cast<ccRenderToFileDlg *>(_o);
        switch (_id) {
        case 0: _t->chooseFile(); break;
        case 1: _t->updateInfo(); break;
        case 2: _t->saveSettings(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ccRenderToFileDlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ccRenderToFileDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ccRenderToFileDlg,
      qt_meta_data_ccRenderToFileDlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ccRenderToFileDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ccRenderToFileDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ccRenderToFileDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ccRenderToFileDlg))
        return static_cast<void*>(const_cast< ccRenderToFileDlg*>(this));
    if (!strcmp(_clname, "Ui::RenderToFileDialog"))
        return static_cast< Ui::RenderToFileDialog*>(const_cast< ccRenderToFileDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int ccRenderToFileDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
