/****************************************************************************
** Meta object code from reading C++ file 'qHPR.h'
**
** Created: Sun Mar 10 15:50:11 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../qCC/plugins/qHPR/qHPR.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qHPR.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qHPR[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       6,    5,    5,    5, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_qHPR[] = {
    "qHPR\0\0doAction()\0"
};

void qHPR::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        qHPR *_t = static_cast<qHPR *>(_o);
        switch (_id) {
        case 0: _t->doAction(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData qHPR::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qHPR::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_qHPR,
      qt_meta_data_qHPR, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qHPR::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qHPR::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qHPR::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qHPR))
        return static_cast<void*>(const_cast< qHPR*>(this));
    if (!strcmp(_clname, "ccStdPluginInterface"))
        return static_cast< ccStdPluginInterface*>(const_cast< qHPR*>(this));
    if (!strcmp(_clname, "edf.rd.CloudCompare.ccStdPluginInterface/1.4"))
        return static_cast< ccStdPluginInterface*>(const_cast< qHPR*>(this));
    return QObject::qt_metacast(_clname);
}

int qHPR::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
