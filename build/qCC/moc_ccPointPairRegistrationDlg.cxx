/****************************************************************************
** Meta object code from reading C++ file 'ccPointPairRegistrationDlg.h'
**
** Created: Sun Mar 10 15:48:32 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qCC/ccPointPairRegistrationDlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccPointPairRegistrationDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ccPointPairRegistrationDlg[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      28,   27,   27,   27, 0x09,
      51,   27,   27,   27, 0x09,
      76,   27,   27,   27, 0x09,
     100,   27,   27,   27, 0x09,
     120,   27,   27,   27, 0x09,
     137,   27,   27,   27, 0x09,
     154,  150,   27,   27, 0x09,
     191,   27,   27,   27, 0x09,
     199,   27,   27,   27, 0x09,
     207,   27,   27,   27, 0x09,
     215,   27,   27,   27, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ccPointPairRegistrationDlg[] = {
    "ccPointPairRegistrationDlg\0\0"
    "showAlignedCloud(bool)\0showReferenceCloud(bool)\0"
    "addManualAlignedPoint()\0addManualRefPoint()\0"
    "unstackAligned()\0unstackRef()\0,,,\0"
    "processPickedPoint(int,uint,int,int)\0"
    "apply()\0align()\0reset()\0cancel()\0"
};

void ccPointPairRegistrationDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ccPointPairRegistrationDlg *_t = static_cast<ccPointPairRegistrationDlg *>(_o);
        switch (_id) {
        case 0: _t->showAlignedCloud((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->showReferenceCloud((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->addManualAlignedPoint(); break;
        case 3: _t->addManualRefPoint(); break;
        case 4: _t->unstackAligned(); break;
        case 5: _t->unstackRef(); break;
        case 6: _t->processPickedPoint((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 7: _t->apply(); break;
        case 8: _t->align(); break;
        case 9: _t->reset(); break;
        case 10: _t->cancel(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ccPointPairRegistrationDlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ccPointPairRegistrationDlg::staticMetaObject = {
    { &ccOverlayDialog::staticMetaObject, qt_meta_stringdata_ccPointPairRegistrationDlg,
      qt_meta_data_ccPointPairRegistrationDlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ccPointPairRegistrationDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ccPointPairRegistrationDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ccPointPairRegistrationDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ccPointPairRegistrationDlg))
        return static_cast<void*>(const_cast< ccPointPairRegistrationDlg*>(this));
    if (!strcmp(_clname, "Ui::pointPairRegistrationDlg"))
        return static_cast< Ui::pointPairRegistrationDlg*>(const_cast< ccPointPairRegistrationDlg*>(this));
    return ccOverlayDialog::qt_metacast(_clname);
}

int ccPointPairRegistrationDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ccOverlayDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
