/****************************************************************************
** Meta object code from reading C++ file 'main_widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../main_widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Main_Widget_t {
    QByteArrayData data[12];
    char stringdata[234];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Main_Widget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Main_Widget_t qt_meta_stringdata_Main_Widget = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 28),
QT_MOC_LITERAL(2, 41, 0),
QT_MOC_LITERAL(3, 42, 25),
QT_MOC_LITERAL(4, 68, 27),
QT_MOC_LITERAL(5, 96, 25),
QT_MOC_LITERAL(6, 122, 23),
QT_MOC_LITERAL(7, 146, 23),
QT_MOC_LITERAL(8, 170, 23),
QT_MOC_LITERAL(9, 194, 15),
QT_MOC_LITERAL(10, 210, 12),
QT_MOC_LITERAL(11, 223, 9)
    },
    "Main_Widget\0on_button_recreation_clicked\0"
    "\0on_button_monitor_clicked\0"
    "on_button_appliance_clicked\0"
    "on_button_curtain_clicked\0"
    "on_button_music_clicked\0on_button_vedio_clicked\0"
    "on_button_light_clicked\0on_quit_clicked\0"
    "deal_to_back\0deal_read\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Main_Widget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08,
       3,    0,   65,    2, 0x08,
       4,    0,   66,    2, 0x08,
       5,    0,   67,    2, 0x08,
       6,    0,   68,    2, 0x08,
       7,    0,   69,    2, 0x08,
       8,    0,   70,    2, 0x08,
       9,    0,   71,    2, 0x08,
      10,    0,   72,    2, 0x08,
      11,    0,   73,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Main_Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Main_Widget *_t = static_cast<Main_Widget *>(_o);
        switch (_id) {
        case 0: _t->on_button_recreation_clicked(); break;
        case 1: _t->on_button_monitor_clicked(); break;
        case 2: _t->on_button_appliance_clicked(); break;
        case 3: _t->on_button_curtain_clicked(); break;
        case 4: _t->on_button_music_clicked(); break;
        case 5: _t->on_button_vedio_clicked(); break;
        case 6: _t->on_button_light_clicked(); break;
        case 7: _t->on_quit_clicked(); break;
        case 8: _t->deal_to_back(); break;
        case 9: _t->deal_read(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Main_Widget::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Main_Widget.data,
      qt_meta_data_Main_Widget,  qt_static_metacall, 0, 0}
};


const QMetaObject *Main_Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Main_Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Main_Widget.stringdata))
        return static_cast<void*>(const_cast< Main_Widget*>(this));
    return QDialog::qt_metacast(_clname);
}

int Main_Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
