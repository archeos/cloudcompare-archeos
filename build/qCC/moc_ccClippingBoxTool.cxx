/****************************************************************************
** Meta object code from reading C++ file 'ccClippingBoxTool.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qCC/ccClippingBoxTool.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccClippingBoxTool.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ccClippingBoxTool[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x0a,
      43,   18,   18,   18, 0x09,
      53,   18,   18,   18, 0x09,
      61,   18,   18,   18, 0x09,
      75,   18,   18,   18, 0x09,
      92,   18,   18,   18, 0x09,
     112,   18,   18,   18, 0x09,
     126,   18,   18,   18, 0x09,
     149,  145,   18,   18, 0x09,
     178,   18,   18,   18, 0x09,
     203,   18,   18,   18, 0x09,
     217,   18,   18,   18, 0x09,
     230,   18,   18,   18, 0x09,
     244,   18,   18,   18, 0x09,
     257,   18,   18,   18, 0x09,
     271,   18,   18,   18, 0x09,
     284,   18,   18,   18, 0x09,
     299,   18,   18,   18, 0x09,
     315,   18,   18,   18, 0x09,
     328,   18,   18,   18, 0x09,
     342,   18,   18,   18, 0x09,
     356,   18,   18,   18, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ccClippingBoxTool[] = {
    "ccClippingBoxTool\0\0toggleInteractors(bool)\0"
    "editBox()\0reset()\0closeDialog()\0"
    "extractContour()\0removeLastContour()\0"
    "exportSlice()\0exportMultSlices()\0box\0"
    "onBoxModified(const ccBBox*)\0"
    "thicknessChanged(double)\0shiftXMinus()\0"
    "shiftXPlus()\0shiftYMinus()\0shiftYPlus()\0"
    "shiftZMinus()\0shiftZPlus()\0setFrontView()\0"
    "setBottomView()\0setTopView()\0setBackView()\0"
    "setLeftView()\0setRightView()\0"
};

void ccClippingBoxTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ccClippingBoxTool *_t = static_cast<ccClippingBoxTool *>(_o);
        switch (_id) {
        case 0: _t->toggleInteractors((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->editBox(); break;
        case 2: _t->reset(); break;
        case 3: _t->closeDialog(); break;
        case 4: _t->extractContour(); break;
        case 5: _t->removeLastContour(); break;
        case 6: _t->exportSlice(); break;
        case 7: _t->exportMultSlices(); break;
        case 8: _t->onBoxModified((*reinterpret_cast< const ccBBox*(*)>(_a[1]))); break;
        case 9: _t->thicknessChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->shiftXMinus(); break;
        case 11: _t->shiftXPlus(); break;
        case 12: _t->shiftYMinus(); break;
        case 13: _t->shiftYPlus(); break;
        case 14: _t->shiftZMinus(); break;
        case 15: _t->shiftZPlus(); break;
        case 16: _t->setFrontView(); break;
        case 17: _t->setBottomView(); break;
        case 18: _t->setTopView(); break;
        case 19: _t->setBackView(); break;
        case 20: _t->setLeftView(); break;
        case 21: _t->setRightView(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ccClippingBoxTool::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ccClippingBoxTool::staticMetaObject = {
    { &ccOverlayDialog::staticMetaObject, qt_meta_stringdata_ccClippingBoxTool,
      qt_meta_data_ccClippingBoxTool, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ccClippingBoxTool::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ccClippingBoxTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ccClippingBoxTool::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ccClippingBoxTool))
        return static_cast<void*>(const_cast< ccClippingBoxTool*>(this));
    if (!strcmp(_clname, "Ui::ClippingBoxDlg"))
        return static_cast< Ui::ClippingBoxDlg*>(const_cast< ccClippingBoxTool*>(this));
    return ccOverlayDialog::qt_metacast(_clname);
}

int ccClippingBoxTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ccOverlayDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
