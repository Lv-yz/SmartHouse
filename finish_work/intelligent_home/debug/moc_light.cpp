/****************************************************************************
** Meta object code from reading C++ file 'light.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../light.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'light.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_light_t {
    QByteArrayData data[5];
    char stringdata[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_light_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_light_t qt_meta_stringdata_light = {
    {
QT_MOC_LITERAL(0, 0, 5),
QT_MOC_LITERAL(1, 6, 7),
QT_MOC_LITERAL(2, 14, 0),
QT_MOC_LITERAL(3, 15, 23),
QT_MOC_LITERAL(4, 39, 23)
    },
    "light\0to_back\0\0on_drawing_open_clicked\0"
    "on_bedroom_open_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_light[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       3,    0,   30,    2, 0x08,
       4,    0,   31,    2, 0x08,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void light::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        light *_t = static_cast<light *>(_o);
        switch (_id) {
        case 0: _t->to_back(); break;
        case 1: _t->on_drawing_open_clicked(); break;
        case 2: _t->on_bedroom_open_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (light::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&light::to_back)) {
                *result = 0;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject light::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_light.data,
      qt_meta_data_light,  qt_static_metacall, 0, 0}
};


const QMetaObject *light::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *light::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_light.stringdata))
        return static_cast<void*>(const_cast< light*>(this));
    return QWidget::qt_metacast(_clname);
}

int light::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void light::to_back()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
