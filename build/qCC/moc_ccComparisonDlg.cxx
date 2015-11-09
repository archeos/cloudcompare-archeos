/****************************************************************************
** Meta object code from reading C++ file 'ccComparisonDlg.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qCC/ccComparisonDlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccComparisonDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ccComparisonDlg[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   16,   17,   16, 0x0a,
      41,   16,   16,   16, 0x0a,
      56,   16,   16,   16, 0x0a,
      72,   16,   16,   16, 0x09,
      84,   16,   16,   16, 0x09,
     106,   16,   16,   16, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ccComparisonDlg[] = {
    "ccComparisonDlg\0\0bool\0computeDistances()\0"
    "applyAndExit()\0cancelAndExit()\0"
    "showHisto()\0locaModelChanged(int)\0"
    "maxDistUpdated()\0"
};

void ccComparisonDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ccComparisonDlg *_t = static_cast<ccComparisonDlg *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->computeDistances();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: _t->applyAndExit(); break;
        case 2: _t->cancelAndExit(); break;
        case 3: _t->showHisto(); break;
        case 4: _t->locaModelChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->maxDistUpdated(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ccComparisonDlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ccComparisonDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ccComparisonDlg,
      qt_meta_data_ccComparisonDlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ccComparisonDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ccComparisonDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ccComparisonDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ccComparisonDlg))
        return static_cast<void*>(const_cast< ccComparisonDlg*>(this));
    if (!strcmp(_clname, "Ui::ComparisonDialog"))
        return static_cast< Ui::ComparisonDialog*>(const_cast< ccComparisonDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int ccComparisonDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
