/****************************************************************************
** Meta object code from reading C++ file 'ccDisplayOptionsDlg.h'
**
** Created: Sun Mar 10 15:48:32 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../qCC/ccDisplayOptionsDlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccDisplayOptionsDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ccDisplayOptionsDlg[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      40,   20,   20,   20, 0x09,
      66,   20,   20,   20, 0x09,
      92,   20,   20,   20, 0x09,
     119,   20,   20,   20, 0x09,
     149,   20,   20,   20, 0x09,
     178,   20,   20,   20, 0x09,
     204,   20,   20,   20, 0x09,
     224,   20,   20,   20, 0x09,
     240,   20,   20,   20, 0x09,
     258,   20,   20,   20, 0x09,
     282,   20,   20,   20, 0x09,
     310,   20,   20,   20, 0x09,
     329,   20,   20,   20, 0x09,
     356,   20,   20,   20, 0x09,
     379,   20,   20,   20, 0x09,
     403,   20,   20,   20, 0x09,
     426,   20,   20,   20, 0x09,
     455,   20,   20,   20, 0x09,
     483,   20,   20,   20, 0x09,
     515,   20,   20,   20, 0x09,
     542,   20,   20,   20, 0x09,
     569,   20,   20,   20, 0x09,
     599,   20,   20,   20, 0x09,
     627,   20,   20,   20, 0x09,
     638,   20,   20,   20, 0x09,
     649,   20,   20,   20, 0x09,
     657,   20,   20,   20, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ccDisplayOptionsDlg[] = {
    "ccDisplayOptionsDlg\0\0aspectHasChanged()\0"
    "changeLightDiffuseColor()\0"
    "changeLightAmbientColor()\0"
    "changeLightSpecularColor()\0"
    "changeMeshFrontDiffuseColor()\0"
    "changeMeshBackDiffuseColor()\0"
    "changeMeshSpecularColor()\0changePointsColor()\0"
    "changeBBColor()\0changeTextColor()\0"
    "changeBackgroundColor()\0"
    "changeHistBackgroundColor()\0"
    "changeLabelColor()\0changeBackgroundGradient()\0"
    "changeMeshDecimation()\0changeCloudDecimation()\0"
    "changeCrossDisplayed()\0"
    "changeColorScaleAlwaysZero()\0"
    "changeColorScaleAlwaysSym()\0"
    "changeColorScaleSquareSize(int)\0"
    "changeDefaultFontSize(int)\0"
    "changeNumberPrecision(int)\0"
    "changeLabelsTransparency(int)\0"
    "changeLabelsMarkerSize(int)\0doAccept()\0"
    "doReject()\0apply()\0reset()\0"
};

void ccDisplayOptionsDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ccDisplayOptionsDlg *_t = static_cast<ccDisplayOptionsDlg *>(_o);
        switch (_id) {
        case 0: _t->aspectHasChanged(); break;
        case 1: _t->changeLightDiffuseColor(); break;
        case 2: _t->changeLightAmbientColor(); break;
        case 3: _t->changeLightSpecularColor(); break;
        case 4: _t->changeMeshFrontDiffuseColor(); break;
        case 5: _t->changeMeshBackDiffuseColor(); break;
        case 6: _t->changeMeshSpecularColor(); break;
        case 7: _t->changePointsColor(); break;
        case 8: _t->changeBBColor(); break;
        case 9: _t->changeTextColor(); break;
        case 10: _t->changeBackgroundColor(); break;
        case 11: _t->changeHistBackgroundColor(); break;
        case 12: _t->changeLabelColor(); break;
        case 13: _t->changeBackgroundGradient(); break;
        case 14: _t->changeMeshDecimation(); break;
        case 15: _t->changeCloudDecimation(); break;
        case 16: _t->changeCrossDisplayed(); break;
        case 17: _t->changeColorScaleAlwaysZero(); break;
        case 18: _t->changeColorScaleAlwaysSym(); break;
        case 19: _t->changeColorScaleSquareSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->changeDefaultFontSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->changeNumberPrecision((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->changeLabelsTransparency((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->changeLabelsMarkerSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->doAccept(); break;
        case 25: _t->doReject(); break;
        case 26: _t->apply(); break;
        case 27: _t->reset(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ccDisplayOptionsDlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ccDisplayOptionsDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ccDisplayOptionsDlg,
      qt_meta_data_ccDisplayOptionsDlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ccDisplayOptionsDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ccDisplayOptionsDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ccDisplayOptionsDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ccDisplayOptionsDlg))
        return static_cast<void*>(const_cast< ccDisplayOptionsDlg*>(this));
    if (!strcmp(_clname, "Ui::DisplayOptionsDlg"))
        return static_cast< Ui::DisplayOptionsDlg*>(const_cast< ccDisplayOptionsDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int ccDisplayOptionsDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void ccDisplayOptionsDlg::aspectHasChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
