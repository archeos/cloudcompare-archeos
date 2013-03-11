/****************************************************************************
** Meta object code from reading C++ file 'ccDBRoot.h'
**
** Created: Sun Mar 10 15:48:33 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qCC/db_tree/ccDBRoot.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccDBRoot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ccDBRoot[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
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
     145,  136,    9,    9, 0x0a,
     172,  163,    9,    9, 0x0a,
     199,  163,    9,    9, 0x0a,
     237,  163,    9,    9, 0x0a,
     264,    9,    9,    9, 0x0a,
     289,    9,    9,    9, 0x09,
     313,    9,    9,    9, 0x09,
     328,    9,    9,    9, 0x09,
     345,    9,    9,    9, 0x09,
     362,    9,    9,    9, 0x09,
     379,    9,    9,    9, 0x09,
     398,    9,    9,    9, 0x09,
     423,    9,    9,    9, 0x09,
     458,    9,    9,    9, 0x09,
     488,    9,    9,    9, 0x09,
     520,    9,    9,    9, 0x09,
     547,    9,    9,    9, 0x09,
     575,    9,    9,    9, 0x09,
     606,    9,    9,    9, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ccDBRoot[] = {
    "ccDBRoot\0\0selectionChanged()\0"
    "selected,deselected\0"
    "changeSelection(QItemSelection,QItemSelection)\0"
    "obj\0reflectObjectPropChange(ccHObject*)\0"
    "uniqueID\0selectEntity(int)\0anObject\0"
    "redrawCCObject(ccHObject*)\0"
    "redrawCCObjectAndChildren(ccHObject*)\0"
    "updateCCObject(ccHObject*)\0"
    "deleteSelectedEntities()\0"
    "showContextMenu(QPoint)\0expandBranch()\0"
    "collapseBranch()\0sortSiblingsAZ()\0"
    "sortSiblingsZA()\0sortSiblingsType()\0"
    "toggleSelectedEntities()\0"
    "toggleSelectedEntitiesVisibility()\0"
    "toggleSelectedEntitiesColor()\0"
    "toggleSelectedEntitiesNormals()\0"
    "toggleSelectedEntitiesSF()\0"
    "toggleSelectedEntitiesMat()\0"
    "toggleSelectedEntities3DName()\0"
    "addEmptyGroup()\0"
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
        case 3: _t->selectEntity((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->redrawCCObject((*reinterpret_cast< ccHObject*(*)>(_a[1]))); break;
        case 5: _t->redrawCCObjectAndChildren((*reinterpret_cast< ccHObject*(*)>(_a[1]))); break;
        case 6: _t->updateCCObject((*reinterpret_cast< ccHObject*(*)>(_a[1]))); break;
        case 7: _t->deleteSelectedEntities(); break;
        case 8: _t->showContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 9: _t->expandBranch(); break;
        case 10: _t->collapseBranch(); break;
        case 11: _t->sortSiblingsAZ(); break;
        case 12: _t->sortSiblingsZA(); break;
        case 13: _t->sortSiblingsType(); break;
        case 14: _t->toggleSelectedEntities(); break;
        case 15: _t->toggleSelectedEntitiesVisibility(); break;
        case 16: _t->toggleSelectedEntitiesColor(); break;
        case 17: _t->toggleSelectedEntitiesNormals(); break;
        case 18: _t->toggleSelectedEntitiesSF(); break;
        case 19: _t->toggleSelectedEntitiesMat(); break;
        case 20: _t->toggleSelectedEntities3DName(); break;
        case 21: _t->addEmptyGroup(); break;
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
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void ccDBRoot::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
