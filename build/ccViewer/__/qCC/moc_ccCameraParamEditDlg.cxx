/****************************************************************************
** Meta object code from reading C++ file 'ccCameraParamEditDlg.h'
**
** Created: Sun Mar 10 15:48:32 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../qCC/ccCameraParamEditDlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccCameraParamEditDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ccCameraParamEditDlg[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      27,   22,   21,   21, 0x0a,
      56,   52,   21,   21, 0x0a,
      85,   83,   21,   21, 0x0a,
     113,   21,   21,   21, 0x0a,
     128,   21,   21,   21, 0x0a,
     144,   21,   21,   21, 0x0a,
     157,   21,   21,   21, 0x0a,
     171,   21,   21,   21, 0x0a,
     185,   21,   21,   21, 0x0a,
     200,   21,   21,   21, 0x0a,
     224,   21,   21,   21, 0x0a,
     246,   21,   21,   21, 0x0a,
     268,   21,   21,   21, 0x0a,
     295,   21,   21,   21, 0x0a,
     320,   21,   21,   21, 0x0a,
     345,   21,   21,   21, 0x0a,
     372,   21,   21,   21, 0x0a,
     391,   21,   21,   21, 0x0a,
     414,  410,   21,   21, 0x0a,
     451,   21,   21,   21, 0x09,
     484,  472,   21,   21, 0x09,
     513,   21,   21,   21, 0x09,
     533,   21,   21,   21, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ccCameraParamEditDlg[] = {
    "ccCameraParamEditDlg\0\0qWin\0"
    "linkWith(QMdiSubWindow*)\0mat\0"
    "initWithMatrix(ccGLMatrix)\0P\0"
    "updatePivotPoint(CCVector3)\0setFrontView()\0"
    "setBottomView()\0setTopView()\0setBackView()\0"
    "setLeftView()\0setRightView()\0"
    "iThetaValueChanged(int)\0iPsiValueChanged(int)\0"
    "iPhiValueChanged(int)\0dThetaValueChanged(double)\0"
    "dPsiValueChanged(double)\0"
    "dPhiValueChanged(double)\0"
    "translationChanged(double)\0"
    "fovChanged(double)\0pickPointAsPivot()\0"
    ",,,\0processPickedPoint(int,uint,int,int)\0"
    "reflectParamChange()\0orientation\0"
    "setView(CC_VIEW_ORIENTATION)\0"
    "pushCurrentMatrix()\0revertToPushedMatrix()\0"
};

void ccCameraParamEditDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ccCameraParamEditDlg *_t = static_cast<ccCameraParamEditDlg *>(_o);
        switch (_id) {
        case 0: _t->linkWith((*reinterpret_cast< QMdiSubWindow*(*)>(_a[1]))); break;
        case 1: _t->initWithMatrix((*reinterpret_cast< const ccGLMatrix(*)>(_a[1]))); break;
        case 2: _t->updatePivotPoint((*reinterpret_cast< const CCVector3(*)>(_a[1]))); break;
        case 3: _t->setFrontView(); break;
        case 4: _t->setBottomView(); break;
        case 5: _t->setTopView(); break;
        case 6: _t->setBackView(); break;
        case 7: _t->setLeftView(); break;
        case 8: _t->setRightView(); break;
        case 9: _t->iThetaValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->iPsiValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->iPhiValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->dThetaValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 13: _t->dPsiValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 14: _t->dPhiValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 15: _t->translationChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 16: _t->fovChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 17: _t->pickPointAsPivot(); break;
        case 18: _t->processPickedPoint((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 19: _t->reflectParamChange(); break;
        case 20: _t->setView((*reinterpret_cast< CC_VIEW_ORIENTATION(*)>(_a[1]))); break;
        case 21: _t->pushCurrentMatrix(); break;
        case 22: _t->revertToPushedMatrix(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ccCameraParamEditDlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ccCameraParamEditDlg::staticMetaObject = {
    { &ccOverlayDialog::staticMetaObject, qt_meta_stringdata_ccCameraParamEditDlg,
      qt_meta_data_ccCameraParamEditDlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ccCameraParamEditDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ccCameraParamEditDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ccCameraParamEditDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ccCameraParamEditDlg))
        return static_cast<void*>(const_cast< ccCameraParamEditDlg*>(this));
    if (!strcmp(_clname, "Ui::CameraParamDlg"))
        return static_cast< Ui::CameraParamDlg*>(const_cast< ccCameraParamEditDlg*>(this));
    return ccOverlayDialog::qt_metacast(_clname);
}

int ccCameraParamEditDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ccOverlayDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
