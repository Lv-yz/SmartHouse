/****************************************************************************
** Meta object code from reading C++ file 'appliance.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../appliance.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'appliance.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_appliance_t {
    QByteArrayData data[9];
    char stringdata[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_appliance_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_appliance_t qt_meta_stringdata_appliance = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 7),
QT_MOC_LITERAL(2, 18, 0),
QT_MOC_LITERAL(3, 19, 15),
QT_MOC_LITERAL(4, 35, 19),
QT_MOC_LITERAL(5, 55, 20),
QT_MOC_LITERAL(6, 76, 4),
QT_MOC_LITERAL(7, 81, 1),
QT_MOC_LITERAL(8, 83, 1)
    },
    "appliance\0to_back\0\0on_back_clicked\0"
    "on_air_open_clicked\0on_tele_open_clicked\0"
    "send\0i\0c\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_appliance[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       3,    0,   40,    2, 0x08,
       4,    0,   41,    2, 0x08,
       5,    0,   42,    2, 0x08,
       6,    2,   43,    2, 0x08,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    7,    8,

       0        // eod
};

void appliance::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        appliance *_t = static_cast<appliance *>(_o);
        switch (_id) {
        case 0: _t->to_back(); break;
        case 1: _t->on_back_clicked(); break;
        case 2: _t->on_air_open_clicked(); break;
        case 3: _t->on_tele_open_clicked(); break;
        case 4: _t->send((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (appliance::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&appliance::to_back)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject appliance::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_appliance.data,
      qt_meta_data_appliance,  qt_static_metacall, 0, 0}
};


const QMetaObject *appliance::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *appliance::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_appliance.stringdata))
        return static_cast<void*>(const_cast< appliance*>(this));
    return QWidget::qt_metacast(_clname);
}

int appliance::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void appliance::to_back()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
