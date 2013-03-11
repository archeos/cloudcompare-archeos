/****************************************************************************
** Meta object code from reading C++ file 'ccGraphicalSegmentationTool.h'
**
** Created: Sun Mar 10 15:48:32 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qCC/ccGraphicalSegmentationTool.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccGraphicalSegmentationTool.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ccGraphicalSegmentationTool[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      29,   28,   28,   28, 0x09,
      41,   28,   28,   28, 0x09,
      54,   28,   28,   28, 0x09,
      68,   28,   28,   28, 0x09,
      76,   28,   28,   28, 0x09,
      84,   28,   28,   28, 0x09,
     101,   28,   28,   28, 0x09,
     114,  110,   28,   28, 0x09,
     142,  110,   28,   28, 0x09,
     167,  165,   28,   28, 0x29,
     186,   28,   28,   28, 0x29,
     202,   28,   28,   28, 0x09,
     231,  219,   28,   28, 0x09,
     272,   28,   28,   28, 0x09,
     300,   28,   28,   28, 0x09,
     325,   28,   28,   28, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ccGraphicalSegmentationTool[] = {
    "ccGraphicalSegmentationTool\0\0segmentIn()\0"
    "segmentOut()\0segment(bool)\0reset()\0"
    "apply()\0applyAndDelete()\0cancel()\0x,y\0"
    "addPointToPolyline(int,int)\0"
    "closePolyLine(int,int)\0x\0closePolyLine(int)\0"
    "closePolyLine()\0closeRectangle()\0"
    "x,y,buttons\0updatePolyLine(int,int,Qt::MouseButtons)\0"
    "pauseSegmentationMode(bool)\0"
    "doSetPolylineSelection()\0"
    "doSetRectangularSelection()\0"
};

void ccGraphicalSegmentationTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ccGraphicalSegmentationTool *_t = static_cast<ccGraphicalSegmentationTool *>(_o);
        switch (_id) {
        case 0: _t->segmentIn(); break;
        case 1: _t->segmentOut(); break;
        case 2: _t->segment((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->reset(); break;
        case 4: _t->apply(); break;
        case 5: _t->applyAndDelete(); break;
        case 6: _t->cancel(); break;
        case 7: _t->addPointToPolyline((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->closePolyLine((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->closePolyLine((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->closePolyLine(); break;
        case 11: _t->closeRectangle(); break;
        case 12: _t->updatePolyLine((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::MouseButtons(*)>(_a[3]))); break;
        case 13: _t->pauseSegmentationMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->doSetPolylineSelection(); break;
        case 15: _t->doSetRectangularSelection(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ccGraphicalSegmentationTool::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ccGraphicalSegmentationTool::staticMetaObject = {
    { &ccOverlayDialog::staticMetaObject, qt_meta_stringdata_ccGraphicalSegmentationTool,
      qt_meta_data_ccGraphicalSegmentationTool, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ccGraphicalSegmentationTool::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ccGraphicalSegmentationTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ccGraphicalSegmentationTool::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ccGraphicalSegmentationTool))
        return static_cast<void*>(const_cast< ccGraphicalSegmentationTool*>(this));
    if (!strcmp(_clname, "Ui::GraphicalSegmentationDlg"))
        return static_cast< Ui::GraphicalSegmentationDlg*>(const_cast< ccGraphicalSegmentationTool*>(this));
    return ccOverlayDialog::qt_metacast(_clname);
}

int ccGraphicalSegmentationTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ccOverlayDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
