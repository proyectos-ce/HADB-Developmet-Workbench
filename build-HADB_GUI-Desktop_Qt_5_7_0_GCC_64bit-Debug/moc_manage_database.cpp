/****************************************************************************
** Meta object code from reading C++ file 'manage_database.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../HADB_GUI/manage_database.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'manage_database.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Manage_Database_t {
    QByteArrayData data[8];
    char stringdata0[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Manage_Database_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Manage_Database_t qt_meta_stringdata_Manage_Database = {
    {
QT_MOC_LITERAL(0, 0, 15), // "Manage_Database"
QT_MOC_LITERAL(1, 16, 21), // "on_buttonBox_accepted"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(4, 61, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(5, 85, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(6, 109, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(7, 133, 23) // "on_pushButton_5_clicked"

    },
    "Manage_Database\0on_buttonBox_accepted\0"
    "\0on_pushButton_clicked\0on_pushButton_4_clicked\0"
    "on_pushButton_3_clicked\0on_pushButton_2_clicked\0"
    "on_pushButton_5_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Manage_Database[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Manage_Database::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Manage_Database *_t = static_cast<Manage_Database *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_buttonBox_accepted(); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_pushButton_4_clicked(); break;
        case 3: _t->on_pushButton_3_clicked(); break;
        case 4: _t->on_pushButton_2_clicked(); break;
        case 5: _t->on_pushButton_5_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Manage_Database::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Manage_Database.data,
      qt_meta_data_Manage_Database,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Manage_Database::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Manage_Database::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Manage_Database.stringdata0))
        return static_cast<void*>(const_cast< Manage_Database*>(this));
    return QDialog::qt_metacast(_clname);
}

int Manage_Database::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
