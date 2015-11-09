/****************************************************************************
** Meta object code from reading C++ file 'ccDBRoot.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qCC/db_tree/ccDBRoot.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccDBRoot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ccDBRoot[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      49,   29,    9,    9, 0x0a,
     100,   96,    9,    9, 0x0a,
     143,  136,    9,    9, 0x0a,
     170,  136,    9,    9, 0x0a,
     208,  136,    9,    9, 0x0a,
     235,    9,    9,    9, 0x0a,
     269,  260,    9,    9, 0x0a,
     294,  287,    9,    9, 0x0a,
     345,  324,    9,    9, 0x0a,
     396,  387,    9,    9, 0x2a,
     433,    9,    9,    9, 0x09,
     457,    9,    9,    9, 0x09,
     472,    9,    9,    9, 0x09,
     489,    9,    9,    9, 0x09,
     518,    9,    9,    9, 0x09,
     535,    9,    9,    9, 0x09,
     552,    9,    9,    9, 0x09,
     571,    9,    9,    9, 0x09,
     593,    9,    9,    9, 0x09,
     618,    9,    9,    9, 0x09,
     653,    9,    9,    9, 0x09,
     683,    9,    9,    9, 0x09,
     715,    9,    9,    9, 0x09,
     742,    9,    9,    9, 0x09,
     770,    9,    9,    9, 0x09,
     801,    9,    9,    9, 0x09,
     817,    9,    9,    9, 0x09,
     847,    9,    9,    9, 0x09,
     879,    9,    9,    9, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ccDBRoot[] = {
    "ccDBRoot\0\0selectionChanged()\0"
    "selected,deselected\0"
    "changeSelection(QItemSelection,QItemSelection)\0"
    "obj\0reflectObjectPropChange(ccHObject*)\0"
    "object\0redrawCCObject(ccHObject*)\0"
    "redrawCCObjectAndChildren(ccHObject*)\0"
    "updateCCObject(ccHObject*)\0"
    "deleteSelectedEntities()\0uniqueID\0"
    "selectEntity(int)\0entIDs\0"
    "selectEntities(std::set<int>)\0"
    "entities,incremental\0"
    "selectEntities(ccHObject::Container,bool)\0"
    "entities\0selectEntities(ccHObject::Container)\0"
    "showContextMenu(QPoint)\0expandBranch()\0"
    "collapseBranch()\0gatherRecursiveInformation()\0"
    "sortChildrenAZ()\0sortChildrenZA()\0"
    "sortChildrenType()\0selectByTypeAndName()\0"
    "toggleSelectedEntities()\0"
    "toggleSelectedEntitiesVisibility()\0"
    "toggleSelectedEntitiesColor()\0"
    "toggleSelectedEntitiesNormals()\0"
    "toggleSelectedEntitiesSF()\0"
    "toggleSelectedEntitiesMat()\0"
    "toggleSelectedEntities3DName()\0"
    "addEmptyGroup()\0alignCameraWithEntityDirect()\0"
    "alignCameraWithEntityIndirect()\0"
    "enableBubbleViewMode()\0"
};

void ccDBRoot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ccDBRoot *_t = static_cast<ccDBRoot *>(_o);
        switch (_id) {
        case 0: _t->selectionChanged(); break;
        case 1: _t->changeSelection((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 2: _t->reflectObjectPropChange((*reinterpret_cast< ccHObject*(*)>(_a[1]))); break;
        case 3: _t->redrawCCObject((*reinterpret_cast< ccHObject*(*)>(_a[1]))); break;
        case 4: _t->redrawCCObjectAndChildren((*reinterpret_cast< ccHObject*(*)>(_a[1]))); break;
        case 5: _t->updateCCObject((*reinterpret_cast< ccHObject*(*)>(_a[1]))); break;
        case 6: _t->deleteSelectedEntities(); break;
        case 7: _t->selectEntity((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->selectEntities((*reinterpret_cast< std::set<int>(*)>(_a[1]))); break;
        case 9: _t->selectEntities((*reinterpret_cast< const ccHObject::Container(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 10: _t->selectEntities((*reinterpret_cast< const ccHObject::Container(*)>(_a[1]))); break;
        case 11: _t->showContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 12: _t->expandBranch(); break;
        case 13: _t->collapseBranch(); break;
        case 14: _t->gatherRecursiveInformation(); break;
        case 15: _t->sortChildrenAZ(); break;
        case 16: _t->sortChildrenZA(); break;
        case 17: _t->sortChildrenType(); break;
        case 18: _t->selectByTypeAndName(); break;
        case 19: _t->toggleSelectedEntities(); break;
        case 20: _t->toggleSelectedEntitiesVisibility(); break;
        case 21: _t->toggleSelectedEntitiesColor(); break;
        case 22: _t->toggleSelectedEntitiesNormals(); break;
        case 23: _t->toggleSelectedEntitiesSF(); break;
        case 24: _t->toggleSelectedEntitiesMat(); break;
        case 25: _t->toggleSelectedEntities3DName(); break;
        case 26: _t->addEmptyGroup(); break;
        case 27: _t->alignCameraWithEntityDirect(); break;
        case 28: _t->alignCameraWithEntityIndirect(); break;
        case 29: _t->enableBubbleViewMode(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ccDBRoot::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ccDBRoot::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_ccDBRoot,
      qt_meta_data_ccDBRoot, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ccDBRoot::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ccDBRoot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ccDBRoot::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ccDBRoot))
        return static_cast<void*>(const_cast< ccDBRoot*>(this));
    return QAbstractItemModel::qt_metacast(_clname);
}

int ccDBRoot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    }
    return _id;
}

// SIGNAL 0
void ccDBRoot::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
