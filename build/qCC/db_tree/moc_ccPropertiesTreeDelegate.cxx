/****************************************************************************
** Meta object code from reading C++ file 'ccPropertiesTreeDelegate.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qCC/db_tree/ccPropertiesTreeDelegate.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccPropertiesTreeDelegate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ccPropertiesTreeDelegate[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
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
     159,   25,   25,   25, 0x09,
     186,   25,   25,   25, 0x09,
     210,   25,   25,   25, 0x09,
     233,   25,   25,   25, 0x09,
     260,   25,   25,   25, 0x09,
     283,   25,   25,   25, 0x09,
     313,   25,   25,   25, 0x09,
     346,   25,   25,   25, 0x09,
     377,   25,   25,   25, 0x09,
     405,   25,   25,   25, 0x09,
     431,   25,   25,   25, 0x09,
     463,   25,   25,   25, 0x09,
     492,   25,   25,   25, 0x09,
     515,   25,   25,   25, 0x09,
     536,   25,   25,   25, 0x09,
     558,   25,   25,   25, 0x09,
     579,   25,   25,   25, 0x09,
     595,   25,   25,   25, 0x09,
     625,   25,   25,   25, 0x09,
     653,   25,   25,   25, 0x09,
     680,   25,   25,   25, 0x09,
     707,   25,   25,   25, 0x09,
     734,   25,   25,   25, 0x09,
     761,   25,   25,   25, 0x09,
     786,   25,   25,   25, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ccPropertiesTreeDelegate[] = {
    "ccPropertiesTreeDelegate\0\0hObject\0"
    "ccObjectPropertiesChanged(ccHObject*)\0"
    "ccObjectAppearanceChanged(ccHObject*)\0"
    "ccObjectAndChildrenAppearanceChanged(ccHObject*)\0"
    "updateItem(QStandardItem*)\0"
    "scalarFieldChanged(int)\0colorScaleChanged(int)\0"
    "colorRampStepsChanged(int)\0"
    "spawnColorRampEditor()\0"
    "octreeDisplayTypeChanged(int)\0"
    "octreeDisplayedLevelChanged(int)\0"
    "primitivePrecisionChanged(int)\0"
    "sphereRadiusChanged(double)\0"
    "coneHeightChanged(double)\0"
    "coneBottomRadiusChanged(double)\0"
    "coneTopRadiusChanged(double)\0"
    "imageAlphaChanged(int)\0applyImageViewport()\0"
    "applySensorViewport()\0applyLabelViewport()\0"
    "updateDisplay()\0objectDisplayChanged(QString)\0"
    "colorSourceChanged(QString)\0"
    "sensorScaleChanged(double)\0"
    "sensorUncertaintyChanged()\0"
    "sensorIndexChanged(double)\0"
    "cloudPointSizeChanged(int)\0"
    "polyineWidthChanged(int)\0"
    "trihedronsScaleChanged(double)\0"
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
        case 5: _t->colorScaleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->colorRampStepsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->spawnColorRampEditor(); break;
        case 8: _t->octreeDisplayTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->octreeDisplayedLevelChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->primitivePrecisionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->sphereRadiusChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 12: _t->coneHeightChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 13: _t->coneBottomRadiusChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 14: _t->coneTopRadiusChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 15: _t->imageAlphaChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->applyImageViewport(); break;
        case 17: _t->applySensorViewport(); break;
        case 18: _t->applyLabelViewport(); break;
        case 19: _t->updateDisplay(); break;
        case 20: _t->objectDisplayChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 21: _t->colorSourceChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 22: _t->sensorScaleChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 23: _t->sensorUncertaintyChanged(); break;
        case 24: _t->sensorIndexChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 25: _t->cloudPointSizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->polyineWidthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->trihedronsScaleChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ccPropertiesTreeDelegate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ccPropertiesTreeDelegate::staticMetaObject = {
    { &QStyledItemDelegate::staticMetaObject, qt_meta_stringdata_ccPropertiesTreeDelegate,
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
    return QStyledItemDelegate::qt_metacast(_clname);
}

int ccPropertiesTreeDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
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
