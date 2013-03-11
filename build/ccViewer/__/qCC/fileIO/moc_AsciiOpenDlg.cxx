/****************************************************************************
** Meta object code from reading C++ file 'AsciiOpenDlg.h'
**
** Created: Sun Mar 10 15:48:32 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../qCC/fileIO/AsciiOpenDlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AsciiOpenDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AsciiOpenDlg[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   14,   13,   13, 0x0a,
      45,   13,   13,   13, 0x09,
      75,   64,   13,   13, 0x09,
     102,   96,   13,   13, 0x09,
     129,   13,   13,   13, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_AsciiOpenDlg[] = {
    "AsciiOpenDlg\0\0separator\0updateTable(QString)\0"
    "testBeforeAccept()\0linesCount\0"
    "setSkippedLines(int)\0index\0"
    "columnsTypeHasChanged(int)\0"
    "shortcutButtonPressed()\0"
};

void AsciiOpenDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AsciiOpenDlg *_t = static_cast<AsciiOpenDlg *>(_o);
        switch (_id) {
        case 0: _t->updateTable((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->testBeforeAccept(); break;
        case 2: _t->setSkippedLines((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->columnsTypeHasChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->shortcutButtonPressed(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AsciiOpenDlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AsciiOpenDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AsciiOpenDlg,
      qt_meta_data_AsciiOpenDlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AsciiOpenDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AsciiOpenDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AsciiOpenDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AsciiOpenDlg))
        return static_cast<void*>(const_cast< AsciiOpenDlg*>(this));
    if (!strcmp(_clname, "Ui::AsciiOpenDialog"))
        return static_cast< Ui::AsciiOpenDialog*>(const_cast< AsciiOpenDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int AsciiOpenDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
