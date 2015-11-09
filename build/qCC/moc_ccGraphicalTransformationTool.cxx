/****************************************************************************
** Meta object code from reading C++ file 'ccGraphicalTransformationTool.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qCC/ccGraphicalTransformationTool.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccGraphicalTransformationTool.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ccGraphicalTransformationTool[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      31,   30,   30,   30, 0x09,
      39,   30,   30,   30, 0x09,
      47,   30,   30,   30, 0x09,
      56,   30,   30,   30, 0x09,
      68,   30,   30,   30, 0x09,
      92,   30,   30,   30, 0x09,
     114,   30,   30,   30, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ccGraphicalTransformationTool[] = {
    "ccGraphicalTransformationTool\0\0apply()\0"
    "reset()\0cancel()\0pause(bool)\0"
    "glTranslate(CCVector3d)\0glRotate(ccGLMatrixd)\0"
    "onShortcutTriggered(int)\0"
};

void ccGraphicalTransformationTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ccGraphicalTransformationTool *_t = static_cast<ccGraphicalTransformationTool *>(_o);
        switch (_id) {
        case 0: _t->apply(); break;
        case 1: _t->reset(); break;
        case 2: _t->cancel(); break;
        case 3: _t->pause((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->glTranslate((*reinterpret_cast< const CCVector3d(*)>(_a[1]))); break;
        case 5: _t->glRotate((*reinterpret_cast< const ccGLMatrixd(*)>(_a[1]))); break;
        case 6: _t->onShortcutTriggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ccGraphicalTransformationTool::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ccGraphicalTransformationTool::staticMetaObject = {
    { &ccOverlayDialog::staticMetaObject, qt_meta_stringdata_ccGraphicalTransformationTool,
      qt_meta_data_ccGraphicalTransformationTool, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ccGraphicalTransformationTool::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ccGraphicalTransformationTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ccGraphicalTransformationTool::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ccGraphicalTransformationTool))
        return static_cast<void*>(const_cast< ccGraphicalTransformationTool*>(this));
    if (!strcmp(_clname, "Ui::GraphicalTransformationDlg"))
        return static_cast< Ui::GraphicalTransformationDlg*>(const_cast< ccGraphicalTransformationTool*>(this));
    return ccOverlayDialog::qt_metacast(_clname);
}

int ccGraphicalTransformationTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ccOverlayDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
