/****************************************************************************
** Meta object code from reading C++ file 'ccColorScaleEditorWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qCC/ccColorScaleEditorWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccColorScaleEditorWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ColorBarWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   16,   15,   15, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_ColorBarWidget[] = {
    "ColorBarWidget\0\0relativePos\0"
    "pointClicked(double)\0"
};

void ColorBarWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ColorBarWidget *_t = static_cast<ColorBarWidget *>(_o);
        switch (_id) {
        case 0: _t->pointClicked((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ColorBarWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ColorBarWidget::staticMetaObject = {
    { &ColorScaleEditorBaseWidget::staticMetaObject, qt_meta_stringdata_ColorBarWidget,
      qt_meta_data_ColorBarWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ColorBarWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ColorBarWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ColorBarWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ColorBarWidget))
        return static_cast<void*>(const_cast< ColorBarWidget*>(this));
    return ColorScaleEditorBaseWidget::qt_metacast(_clname);
}

int ColorBarWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ColorScaleEditorBaseWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void ColorBarWidget::pointClicked(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_SlidersWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   15,   14,   14, 0x05,
      41,   15,   14,   14, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_SlidersWidget[] = {
    "SlidersWidget\0\0index\0sliderModified(int)\0"
    "sliderSelected(int)\0"
};

void SlidersWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SlidersWidget *_t = static_cast<SlidersWidget *>(_o);
        switch (_id) {
        case 0: _t->sliderModified((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->sliderSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SlidersWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SlidersWidget::staticMetaObject = {
    { &ColorScaleEditorBaseWidget::staticMetaObject, qt_meta_stringdata_SlidersWidget,
      qt_meta_data_SlidersWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SlidersWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SlidersWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SlidersWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SlidersWidget))
        return static_cast<void*>(const_cast< SlidersWidget*>(this));
    return ColorScaleEditorBaseWidget::qt_metacast(_clname);
}

int SlidersWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ColorScaleEditorBaseWidget::qt_metacall(_c, _id, _a);
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
void SlidersWidget::sliderModified(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SlidersWidget::sliderSelected(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_ccColorScaleEditorWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      32,   26,   25,   25, 0x05,
      50,   26,   25,   25, 0x05,

 // slots: signature, parameters, type, tag, flags
      80,   68,   25,   25, 0x09,
     115,  103,   25,   25, 0x09,
     137,  103,   25,   25, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ccColorScaleEditorWidget[] = {
    "ccColorScaleEditorWidget\0\0index\0"
    "stepSelected(int)\0stepModified(int)\0"
    "relativePos\0onPointClicked(double)\0"
    "sliderIndex\0onSliderModified(int)\0"
    "onSliderSelected(int)\0"
};

void ccColorScaleEditorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ccColorScaleEditorWidget *_t = static_cast<ccColorScaleEditorWidget *>(_o);
        switch (_id) {
        case 0: _t->stepSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->stepModified((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->onPointClicked((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->onSliderModified((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->onSliderSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ccColorScaleEditorWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ccColorScaleEditorWidget::staticMetaObject = {
    { &ColorScaleEditorBaseWidget::staticMetaObject, qt_meta_stringdata_ccColorScaleEditorWidget,
      qt_meta_data_ccColorScaleEditorWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ccColorScaleEditorWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ccColorScaleEditorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ccColorScaleEditorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ccColorScaleEditorWidget))
        return static_cast<void*>(const_cast< ccColorScaleEditorWidget*>(this));
    return ColorScaleEditorBaseWidget::qt_metacast(_clname);
}

int ccColorScaleEditorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ColorScaleEditorBaseWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void ccColorScaleEditorWidget::stepSelected(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ccColorScaleEditorWidget::stepModified(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
