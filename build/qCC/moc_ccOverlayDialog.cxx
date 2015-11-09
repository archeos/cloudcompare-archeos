/****************************************************************************
** Meta object code from reading C++ file 'ccOverlayDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qCC/ccOverlayDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccOverlayDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ccOverlayDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      26,   17,   16,   16, 0x05,
      52,   48,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      82,   75,   16,   16, 0x09,
     115,   16,   16,   16, 0x29,

       0        // eod
};

static const char qt_meta_stringdata_ccOverlayDialog[] = {
    "ccOverlayDialog\0\0accepted\0"
    "processFinished(bool)\0key\0"
    "shortcutTriggered(int)\0object\0"
    "onLinkedWindowDeletion(QObject*)\0"
    "onLinkedWindowDeletion()\0"
};

void ccOverlayDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ccOverlayDialog *_t = static_cast<ccOverlayDialog *>(_o);
        switch (_id) {
        case 0: _t->processFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->shortcutTriggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->onLinkedWindowDeletion((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 3: _t->onLinkedWindowDeletion(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ccOverlayDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ccOverlayDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ccOverlayDialog,
      qt_meta_data_ccOverlayDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ccOverlayDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ccOverlayDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ccOverlayDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ccOverlayDialog))
        return static_cast<void*>(const_cast< ccOverlayDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ccOverlayDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void ccOverlayDialog::processFinished(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ccOverlayDialog::shortcutTriggered(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
