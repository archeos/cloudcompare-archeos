/****************************************************************************
** Meta object code from reading C++ file 'ccSectionExtractionTool.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qCC/ccSectionExtractionTool.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccSectionExtractionTool.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ccSectionExtractionTool[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x09,
      56,   37,   32,   24, 0x09,
      68,   24,   32,   24, 0x29,
      76,   24,   24,   24, 0x09,
      84,   24,   24,   24, 0x09,
      97,   93,   24,   24, 0x09,
     125,   93,   24,   24, 0x09,
     150,  148,   24,   24, 0x29,
     169,   24,   24,   24, 0x29,
     197,  185,   24,   24, 0x09,
     238,   24,   24,   24, 0x09,
     269,   24,   24,   24, 0x09,
     295,   24,   24,   24, 0x09,
     317,   24,   24,   24, 0x09,
     337,   24,   24,   24, 0x09,
     361,   24,   24,   24, 0x09,
     377,   24,   24,   24, 0x09,
     394,   24,   24,   24, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ccSectionExtractionTool[] = {
    "ccSectionExtractionTool\0\0undo()\0bool\0"
    "askForConfirmation\0reset(bool)\0reset()\0"
    "apply()\0cancel()\0x,y\0addPointToPolyline(int,int)\0"
    "closePolyLine(int,int)\0x\0closePolyLine(int)\0"
    "closePolyLine()\0x,y,buttons\0"
    "updatePolyLine(int,int,Qt::MouseButtons)\0"
    "enableSectionEditingMode(bool)\0"
    "doImportPolylinesFromDB()\0"
    "setVertDimension(int)\0entitySelected(int)\0"
    "generateOrthoSections()\0extractPoints()\0"
    "exportSections()\0onShortcutTriggered(int)\0"
};

void ccSectionExtractionTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ccSectionExtractionTool *_t = static_cast<ccSectionExtractionTool *>(_o);
        switch (_id) {
        case 0: _t->undo(); break;
        case 1: { bool _r = _t->reset((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->reset();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: _t->apply(); break;
        case 4: _t->cancel(); break;
        case 5: _t->addPointToPolyline((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->closePolyLine((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->closePolyLine((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->closePolyLine(); break;
        case 9: _t->updatePolyLine((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::MouseButtons(*)>(_a[3]))); break;
        case 10: _t->enableSectionEditingMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->doImportPolylinesFromDB(); break;
        case 12: _t->setVertDimension((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->entitySelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->generateOrthoSections(); break;
        case 15: _t->extractPoints(); break;
        case 16: _t->exportSections(); break;
        case 17: _t->onShortcutTriggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ccSectionExtractionTool::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ccSectionExtractionTool::staticMetaObject = {
    { &ccOverlayDialog::staticMetaObject, qt_meta_stringdata_ccSectionExtractionTool,
      qt_meta_data_ccSectionExtractionTool, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ccSectionExtractionTool::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ccSectionExtractionTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ccSectionExtractionTool::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ccSectionExtractionTool))
        return static_cast<void*>(const_cast< ccSectionExtractionTool*>(this));
    if (!strcmp(_clname, "Ui::SectionExtractionDlg"))
        return static_cast< Ui::SectionExtractionDlg*>(const_cast< ccSectionExtractionTool*>(this));
    return ccOverlayDialog::qt_metacast(_clname);
}

int ccSectionExtractionTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ccOverlayDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
