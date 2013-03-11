/****************************************************************************
** Meta object code from reading C++ file 'PlyOpenDlg.h'
**
** Created: Sun Mar 10 15:48:32 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../qCC/fileIO/PlyOpenDlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PlyOpenDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PlyOpenDlg[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      28,   11,   11,   11, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_PlyOpenDlg[] = {
    "PlyOpenDlg\0\0fullyAccepted()\0"
    "testBeforeAccept()\0"
};

void PlyOpenDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PlyOpenDlg *_t = static_cast<PlyOpenDlg *>(_o);
        switch (_id) {
        case 0: _t->fullyAccepted(); break;
        case 1: _t->testBeforeAccept(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PlyOpenDlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PlyOpenDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PlyOpenDlg,
      qt_meta_data_PlyOpenDlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PlyOpenDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PlyOpenDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PlyOpenDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PlyOpenDlg))
        return static_cast<void*>(const_cast< PlyOpenDlg*>(this));
    if (!strcmp(_clname, "Ui::PlyOpenDlg"))
        return static_cast< Ui::PlyOpenDlg*>(const_cast< PlyOpenDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int PlyOpenDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void PlyOpenDlg::fullyAccepted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
