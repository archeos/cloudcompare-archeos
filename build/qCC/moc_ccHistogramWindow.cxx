/****************************************************************************
** Meta object code from reading C++ file 'ccHistogramWindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qCC/ccHistogramWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccHistogramWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ccHistogramWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,
      47,   18,   18,   18, 0x05,
      75,   18,   18,   18, 0x05,
     102,   18,   18,   18, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_ccHistogramWindow[] = {
    "ccHistogramWindow\0\0sfMinDispValChanged(double)\0"
    "sfMaxDispValChanged(double)\0"
    "sfMinSatValChanged(double)\0"
    "sfMaxSatValChanged(double)\0"
};

void ccHistogramWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ccHistogramWindow *_t = static_cast<ccHistogramWindow *>(_o);
        switch (_id) {
        case 0: _t->sfMinDispValChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->sfMaxDispValChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->sfMinSatValChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->sfMaxSatValChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ccHistogramWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ccHistogramWindow::staticMetaObject = {
    { &QCustomPlot::staticMetaObject, qt_meta_stringdata_ccHistogramWindow,
      qt_meta_data_ccHistogramWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ccHistogramWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ccHistogramWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ccHistogramWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ccHistogramWindow))
        return static_cast<void*>(const_cast< ccHistogramWindow*>(this));
    return QCustomPlot::qt_metacast(_clname);
}

int ccHistogramWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCustomPlot::qt_metacall(_c, _id, _a);
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
void ccHistogramWindow::sfMinDispValChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ccHistogramWindow::sfMaxDispValChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ccHistogramWindow::sfMinSatValChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ccHistogramWindow::sfMaxSatValChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
static const uint qt_meta_data_ccHistogramWindowDlg[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x09,
      38,   21,   21,   21, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ccHistogramWindowDlg[] = {
    "ccHistogramWindowDlg\0\0onExportToCSV()\0"
    "onExportToImage()\0"
};

void ccHistogramWindowDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ccHistogramWindowDlg *_t = static_cast<ccHistogramWindowDlg *>(_o);
        switch (_id) {
        case 0: _t->onExportToCSV(); break;
        case 1: _t->onExportToImage(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ccHistogramWindowDlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ccHistogramWindowDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ccHistogramWindowDlg,
      qt_meta_data_ccHistogramWindowDlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ccHistogramWindowDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ccHistogramWindowDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ccHistogramWindowDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ccHistogramWindowDlg))
        return static_cast<void*>(const_cast< ccHistogramWindowDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int ccHistogramWindowDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
