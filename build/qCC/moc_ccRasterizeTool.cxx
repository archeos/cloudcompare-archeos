/****************************************************************************
** Meta object code from reading C++ file 'ccRasterizeTool.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qCC/ccRasterizeTool.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccRasterizeTool.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ccRasterizeTool[] = {

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
      42,   31,   17,   16, 0x09,
      62,   16,   17,   16, 0x29,
      78,   16,   16,   16, 0x09,
      94,   16,   16,   16, 0x09,
     111,   16,   16,   16, 0x09,
     133,   16,   16,   16, 0x09,
     148,   16,   16,   16, 0x09,
     169,   16,   16,   16, 0x09,
     188,   16,   16,   16, 0x09,
     209,   16,   16,   16, 0x09,
     225,   16,   16,   16, 0x09,
     241,   16,   16,   16, 0x09,
     268,  256,   16,   16, 0x09,
     297,   16,   16,   16, 0x29,
     321,   16,   16,   16, 0x09,
     347,   16,   16,   16, 0x09,
     374,   16,   16,   16, 0x09,
     403,   16,   16,   16, 0x09,
     423,   16,   16,   16, 0x09,
     457,   16,   16,   16, 0x09,
     477,   16,   16,   16, 0x09,
     494,   16,   16,   16, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ccRasterizeTool[] = {
    "ccRasterizeTool\0\0ccPointCloud*\0"
    "autoExport\0generateCloud(bool)\0"
    "generateCloud()\0generateImage()\0"
    "generateRaster()\0generateASCIIMatrix()\0"
    "generateMesh()\0exportContourLines()\0"
    "generateContours()\0removeContourLines()\0"
    "testAndAccept()\0testAndReject()\0"
    "saveSettings()\0,autoRedraw\0"
    "activeLayerChanged(int,bool)\0"
    "activeLayerChanged(int)\0"
    "projectionDirChanged(int)\0"
    "projectionTypeChanged(int)\0"
    "sfProjectionTypeChanged(int)\0"
    "showGridBoxEditor()\0"
    "fillEmptyCellStrategyChanged(int)\0"
    "gridOptionChanged()\0updateGridInfo()\0"
    "updateGridAndDisplay()\0"
};

void ccRasterizeTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ccRasterizeTool *_t = static_cast<ccRasterizeTool *>(_o);
        switch (_id) {
        case 0: { ccPointCloud* _r = _t->generateCloud((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ccPointCloud**>(_a[0]) = _r; }  break;
        case 1: { ccPointCloud* _r = _t->generateCloud();
            if (_a[0]) *reinterpret_cast< ccPointCloud**>(_a[0]) = _r; }  break;
        case 2: _t->generateImage(); break;
        case 3: _t->generateRaster(); break;
        case 4: _t->generateASCIIMatrix(); break;
        case 5: _t->generateMesh(); break;
        case 6: _t->exportContourLines(); break;
        case 7: _t->generateContours(); break;
        case 8: _t->removeContourLines(); break;
        case 9: _t->testAndAccept(); break;
        case 10: _t->testAndReject(); break;
        case 11: _t->saveSettings(); break;
        case 12: _t->activeLayerChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 13: _t->activeLayerChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->projectionDirChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->projectionTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->sfProjectionTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->showGridBoxEditor(); break;
        case 18: _t->fillEmptyCellStrategyChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->gridOptionChanged(); break;
        case 20: _t->updateGridInfo(); break;
        case 21: _t->updateGridAndDisplay(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ccRasterizeTool::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ccRasterizeTool::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ccRasterizeTool,
      qt_meta_data_ccRasterizeTool, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ccRasterizeTool::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ccRasterizeTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ccRasterizeTool::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ccRasterizeTool))
        return static_cast<void*>(const_cast< ccRasterizeTool*>(this));
    if (!strcmp(_clname, "Ui::RasterizeToolDialog"))
        return static_cast< Ui::RasterizeToolDialog*>(const_cast< ccRasterizeTool*>(this));
    return QDialog::qt_metacast(_clname);
}

int ccRasterizeTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
