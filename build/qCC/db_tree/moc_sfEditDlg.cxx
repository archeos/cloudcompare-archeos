/****************************************************************************
** Meta object code from reading C++ file 'sfEditDlg.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qCC/db_tree/sfEditDlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sfEditDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_sfEditDlg[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      32,   10,   10,   10, 0x0a,
      56,   10,   10,   10, 0x0a,
      80,   10,   10,   10, 0x0a,
     104,   10,   10,   10, 0x0a,
     128,   10,   10,   10, 0x0a,
     155,   10,   10,   10, 0x0a,
     182,   10,   10,   10, 0x0a,
     209,   10,   10,   10, 0x0a,
     236,   10,   10,   10, 0x0a,
     259,   10,   10,   10, 0x0a,
     284,   10,   10,   10, 0x0a,
     314,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_sfEditDlg[] = {
    "sfEditDlg\0\0entitySFHasChanged()\0"
    "minValSBChanged(double)\0maxValSBChanged(double)\0"
    "minSatSBChanged(double)\0maxSatSBChanged(double)\0"
    "minValHistoChanged(double)\0"
    "maxValHistoChanged(double)\0"
    "minSatHistoChanged(double)\0"
    "maxSatHistoChanged(double)\0"
    "nanInGrayChanged(bool)\0alwaysShow0Changed(bool)\0"
    "symmetricalScaleChanged(bool)\0"
    "logScaleChanged(bool)\0"
};

void sfEditDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        sfEditDlg *_t = static_cast<sfEditDlg *>(_o);
        switch (_id) {
        case 0: _t->entitySFHasChanged(); break;
        case 1: _t->minValSBChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->maxValSBChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->minSatSBChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->maxSatSBChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->minValHistoChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->maxValHistoChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->minSatHistoChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->maxSatHistoChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->nanInGrayChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->alwaysShow0Changed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->symmetricalScaleChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->logScaleChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData sfEditDlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject sfEditDlg::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_sfEditDlg,
      qt_meta_data_sfEditDlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &sfEditDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *sfEditDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *sfEditDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_sfEditDlg))
        return static_cast<void*>(const_cast< sfEditDlg*>(this));
    if (!strcmp(_clname, "Ui::SFEditDlg"))
        return static_cast< Ui::SFEditDlg*>(const_cast< sfEditDlg*>(this));
    return QWidget::qt_metacast(_clname);
}

int sfEditDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void sfEditDlg::entitySFHasChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE