/****************************************************************************
** Meta object code from reading C++ file 'ccPointPropertiesDlg.h'
**
** Created: Sun Mar 10 15:48:33 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qCC/ccPointPropertiesDlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccPointPropertiesDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ccPointPropertiesDlg[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      43,   21,   21,   21, 0x09,
      53,   21,   21,   21, 0x09,
      86,   21,   21,   21, 0x09,
     112,   21,   21,   21, 0x09,
     135,   21,   21,   21, 0x09,
     159,   21,   21,   21, 0x09,
     177,   21,   21,   21, 0x09,
     210,  198,   21,   21, 0x09,
     253,  249,   21,   21, 0x09,
     282,   21,   21,   21, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ccPointPropertiesDlg[] = {
    "ccPointPropertiesDlg\0\0newLabel(ccHObject*)\0"
    "onClose()\0activatePointPropertiesDisplay()\0"
    "activateDistanceDisplay()\0"
    "activateAngleDisplay()\0activate2DZonePicking()\0"
    "initializeState()\0exportCurrentLabel()\0"
    "x,y,buttons\0update2DZone(int,int,Qt::MouseButtons)\0"
    "x,y\0processClickedPoint(int,int)\0"
    "close2DZone()\0"
};

void ccPointPropertiesDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ccPointPropertiesDlg *_t = static_cast<ccPointPropertiesDlg *>(_o);
        switch (_id) {
        case 0: _t->newLabel((*reinterpret_cast< ccHObject*(*)>(_a[1]))); break;
        case 1: _t->onClose(); break;
        case 2: _t->activatePointPropertiesDisplay(); break;
        case 3: _t->activateDistanceDisplay(); break;
        case 4: _t->activateAngleDisplay(); break;
        case 5: _t->activate2DZonePicking(); break;
        case 6: _t->initializeState(); break;
        case 7: _t->exportCurrentLabel(); break;
        case 8: _t->update2DZone((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::MouseButtons(*)>(_a[3]))); break;
        case 9: _t->processClickedPoint((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->close2DZone(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ccPointPropertiesDlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ccPointPropertiesDlg::staticMetaObject = {
    { &ccPointPickingGenericInterface::staticMetaObject, qt_meta_stringdata_ccPointPropertiesDlg,
      qt_meta_data_ccPointPropertiesDlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ccPointPropertiesDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ccPointPropertiesDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ccPointPropertiesDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ccPointPropertiesDlg))
        return static_cast<void*>(const_cast< ccPointPropertiesDlg*>(this));
    if (!strcmp(_clname, "Ui::PointPropertiesDlg"))
        return static_cast< Ui::PointPropertiesDlg*>(const_cast< ccPointPropertiesDlg*>(this));
    return ccPointPickingGenericInterface::qt_metacast(_clname);
}

int ccPointPropertiesDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ccPointPickingGenericInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void ccPointPropertiesDlg::newLabel(ccHObject * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
