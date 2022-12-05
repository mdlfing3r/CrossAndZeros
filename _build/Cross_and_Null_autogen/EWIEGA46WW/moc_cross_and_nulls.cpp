/****************************************************************************
** Meta object code from reading C++ file 'cross_and_nulls.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../cross_and_nulls.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cross_and_nulls.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Cross_and_nulls_t {
    const uint offsetsAndSize[14];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Cross_and_nulls_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Cross_and_nulls_t qt_meta_stringdata_Cross_and_nulls = {
    {
QT_MOC_LITERAL(0, 15), // "Cross_and_nulls"
QT_MOC_LITERAL(16, 22), // "on_Button_play_clicked"
QT_MOC_LITERAL(39, 0), // ""
QT_MOC_LITERAL(40, 23), // "on_Button_about_clicked"
QT_MOC_LITERAL(64, 34), // "on_Button_selectSide_Right_cl..."
QT_MOC_LITERAL(99, 7), // "checked"
QT_MOC_LITERAL(107, 33) // "on_Button_selectSide_Left_cli..."

    },
    "Cross_and_nulls\0on_Button_play_clicked\0"
    "\0on_Button_about_clicked\0"
    "on_Button_selectSide_Right_clicked\0"
    "checked\0on_Button_selectSide_Left_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cross_and_nulls[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x08,    1 /* Private */,
       3,    0,   39,    2, 0x08,    2 /* Private */,
       4,    1,   40,    2, 0x08,    3 /* Private */,
       6,    1,   43,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,

       0        // eod
};

void Cross_and_nulls::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Cross_and_nulls *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_Button_play_clicked(); break;
        case 1: _t->on_Button_about_clicked(); break;
        case 2: _t->on_Button_selectSide_Right_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->on_Button_selectSide_Left_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Cross_and_nulls::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_Cross_and_nulls.offsetsAndSize,
    qt_meta_data_Cross_and_nulls,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Cross_and_nulls_t
, QtPrivate::TypeAndForceComplete<Cross_and_nulls, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>


>,
    nullptr
} };


const QMetaObject *Cross_and_nulls::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cross_and_nulls::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cross_and_nulls.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Cross_and_nulls::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
