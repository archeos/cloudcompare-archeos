/****************************************************************************
** Meta object code from reading C++ file 'ccPropertiesTreeDelegate.h'
**
** Created: Sun Mar 10 15:48:33 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qCC/db_tree/ccPropertiesTreeDelegate.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccPropertiesTreeDelegate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ccPropertiesTreeDelegate[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      34,   26,   25,   25, 0x05,
      72,   26,   25,   25, 0x05,
     110,   26,   25,   25, 0x05,

 // slots: signature, parameters, type, tag, flags
     164,  159,   25,   25, 0x09,
     195,  191,   25,   25, 0x09,
     228,  219,   25,   25, 0x09,
     257,  191,   25,   25, 0x09,
     279,  191,   25,   25, 0x09,
     313,  309,   25,   25, 0x09,
     346,  309,   25,   25, 0x09,
     377,  309,   25,   25, 0x09,
     404,  309,   25,   25, 0x09,
     427,   25,   25,   25, 0x09,
     448,   25,   25,   25, 0x09,
     469,   25,   25,   25, 0x09,
     502,  486,   25,   25, 0x09,
     532,  309,   25,   25, 0x09,
     564,  559,   25,   25, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ccPropertiesTreeDelegate[] = {
    "ccPropertiesTreeDelegate\0\0hObject\0"
    "ccObjectPropertiesChanged(ccHObject*)\0"
    "ccObjectAppearanceChanged(ccHObject*)\0"
    "ccObjectAndChildrenAppearanceChanged(ccHObject*)\0"
    "item\0updateItem(QStandardItem*)\0pos\0"
    "scalarFieldChanged(int)\0positive\0"
    "scalarFieldTypeChanged(bool)\0"
    "colorRampChanged(int)\0"
    "octreeDisplayTypeChanged(int)\0val\0"
    "octreeDisplayedLevelChanged(int)\0"
    "primitivePrecisionChanged(int)\0"
    "colorRampStepsChanged(int)\0"
    "imageAlphaChanged(int)\0applyImageViewport()\0"
    "applyLabelViewport()\0redrawObjectSF()\0"
    "newDisplayTitle\0objectDisplayChanged(QString)\0"
    "sensorScaleChanged(double)\0size\0"
    "cloudPointSizeChanged(int)\0"
};

void ccPropertiesTreeDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ccPropertiesTreeDelegate *_t = static_cast<ccPropertiesTreeDelegate *>(_o);
        switch (_id) {
        case 0: _t->ccObjectPropertiesChanged((*reinterpret_cast< ccHObject*(*)>(_a[1]))); break;
        case 1: _t->ccObjectAppearanceChanged((*reinterpret_cast< ccHObject*(*)>(_a[1]))); break;
        case 2: _t->ccObjectAndChildrenAppearanceChanged((*reinterpret_cast< ccHObject*(*)>(_a[1]))); break;
        case 3: _t->updateItem((*reinterpret_cast< QStandardItem*(*)>(_a[1]))); break;
        case 4: _t->scalarFieldChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->scalarFieldTypeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->colorRampChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->octreeDisplayTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->octreeDisplayedLevelChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->primitivePrecisionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->colorRampStepsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->imageAlphaChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->applyImageViewport(); break;
        case 13: _t->applyLabelViewport(); break;
        case 14: _t->redrawObjectSF(); break;
        case 15: _t->objectDisplayChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->sensorScaleChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 17: _t->cloudPointSizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ccPropertiesTreeDelegate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ccPropertiesTreeDelegate::staticMetaObject = {
    { &QItemDelegate::staticMetaObject, qt_meta_stringdata_ccPropertiesTreeDelegate,
      qt_meta_data_ccPropertiesTreeDelegate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ccPropertiesTreeDelegate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ccPropertiesTreeDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ccPropertiesTreeDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ccPropertiesTreeDelegate))
        return static_cast<void*>(const_cast< ccPropertiesTreeDelegate*>(this));
    return QItemDelegate::qt_metacast(_clname);
}

int ccPropertiesTreeDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void ccPropertiesTreeDelegate::ccObjectPropertiesChanged(ccHObject * _t1)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< ccPropertiesTreeDelegate *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ccPropertiesTreeDelegate::ccObjectAppearanceChanged(ccHObject * _t1)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< ccPropertiesTreeDelegate *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ccPropertiesTreeDelegate::ccObjectAndChildrenAppearanceChanged(ccHObject * _t1)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< ccPropertiesTreeDelegate *>(this), &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
