/****************************************************************************
** Meta object code from reading C++ file 'gamemode.h'
**
<<<<<<< HEAD
<<<<<<< HEAD
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
=======
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
>>>>>>> 9afdd9bdc8a8cd1c3ca6918bfcc94f3353855373
=======
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
>>>>>>> 11e60ff557000c41d38303babeae7e2c19ac860b
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../TicTacToe/gamemode.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gamemode.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
<<<<<<< HEAD
<<<<<<< HEAD
#error "This file was generated using the moc from 5.2.1. It"
=======
#error "This file was generated using the moc from 5.4.2. It"
>>>>>>> 9afdd9bdc8a8cd1c3ca6918bfcc94f3353855373
=======
#error "This file was generated using the moc from 5.2.1. It"
>>>>>>> 11e60ff557000c41d38303babeae7e2c19ac860b
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_gameMode_t {
    QByteArrayData data[3];
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> 11e60ff557000c41d38303babeae7e2c19ac860b
    char stringdata[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_gameMode_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_gameMode_t qt_meta_stringdata_gameMode = {
    {
QT_MOC_LITERAL(0, 0, 8),
QT_MOC_LITERAL(1, 9, 25),
QT_MOC_LITERAL(2, 35, 0)
    },
    "gameMode\0on_GameOptionMode_clicked\0\0"
<<<<<<< HEAD
=======
    char stringdata[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gameMode_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gameMode_t qt_meta_stringdata_gameMode = {
    {
QT_MOC_LITERAL(0, 0, 8), // "gameMode"
QT_MOC_LITERAL(1, 9, 25), // "on_GameOptionMode_clicked"
QT_MOC_LITERAL(2, 35, 0) // ""

    },
    "gameMode\0on_GameOptionMode_clicked\0"
>>>>>>> 9afdd9bdc8a8cd1c3ca6918bfcc94f3353855373
=======
>>>>>>> 11e60ff557000c41d38303babeae7e2c19ac860b
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gameMode[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
<<<<<<< HEAD
<<<<<<< HEAD
       1,    0,   19,    2, 0x08,
=======
       1,    0,   19,    2, 0x08 /* Private */,
>>>>>>> 9afdd9bdc8a8cd1c3ca6918bfcc94f3353855373
=======
       1,    0,   19,    2, 0x08,
>>>>>>> 11e60ff557000c41d38303babeae7e2c19ac860b

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void gameMode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        gameMode *_t = static_cast<gameMode *>(_o);
        switch (_id) {
        case 0: _t->on_GameOptionMode_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject gameMode::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_gameMode.data,
<<<<<<< HEAD
<<<<<<< HEAD
      qt_meta_data_gameMode,  qt_static_metacall, 0, 0}
=======
      qt_meta_data_gameMode,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
>>>>>>> 9afdd9bdc8a8cd1c3ca6918bfcc94f3353855373
=======
      qt_meta_data_gameMode,  qt_static_metacall, 0, 0}
>>>>>>> 11e60ff557000c41d38303babeae7e2c19ac860b
};


const QMetaObject *gameMode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gameMode::qt_metacast(const char *_clname)
{
<<<<<<< HEAD
<<<<<<< HEAD
    if (!_clname) return 0;
=======
    if (!_clname) return Q_NULLPTR;
>>>>>>> 9afdd9bdc8a8cd1c3ca6918bfcc94f3353855373
=======
    if (!_clname) return 0;
>>>>>>> 11e60ff557000c41d38303babeae7e2c19ac860b
    if (!strcmp(_clname, qt_meta_stringdata_gameMode.stringdata))
        return static_cast<void*>(const_cast< gameMode*>(this));
    return QDialog::qt_metacast(_clname);
}

int gameMode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
