/****************************************************************************
** Meta object code from reading C++ file 'sequenceradaptor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "sequenceradaptor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sequenceradaptor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SequencerAdaptor_t {
    QByteArrayData data[12];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SequencerAdaptor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SequencerAdaptor_t qt_meta_stringdata_SequencerAdaptor = {
    {
QT_MOC_LITERAL(0, 0, 16), // "SequencerAdaptor"
QT_MOC_LITERAL(1, 17, 11), // "signalTicks"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 4), // "tick"
QT_MOC_LITERAL(4, 35, 8), // "finished"
QT_MOC_LITERAL(5, 44, 14), // "sequencerEvent"
QT_MOC_LITERAL(6, 59, 26), // "drumstick::SequencerEvent*"
QT_MOC_LITERAL(7, 86, 2), // "ev"
QT_MOC_LITERAL(8, 89, 12), // "songFinished"
QT_MOC_LITERAL(9, 102, 11), // "shutupSound"
QT_MOC_LITERAL(10, 114, 7), // "setLoop"
QT_MOC_LITERAL(11, 122, 6) // "enable"

    },
    "SequencerAdaptor\0signalTicks\0\0tick\0"
    "finished\0sequencerEvent\0"
    "drumstick::SequencerEvent*\0ev\0"
    "songFinished\0shutupSound\0setLoop\0"
    "enable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SequencerAdaptor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    0,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   48,    2, 0x0a /* Public */,
       8,    0,   51,    2, 0x0a /* Public */,
       9,    0,   52,    2, 0x0a /* Public */,
      10,    1,   53,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,

       0        // eod
};

void SequencerAdaptor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SequencerAdaptor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalTicks((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->finished(); break;
        case 2: _t->sequencerEvent((*reinterpret_cast< drumstick::SequencerEvent*(*)>(_a[1]))); break;
        case 3: _t->songFinished(); break;
        case 4: _t->shutupSound(); break;
        case 5: _t->setLoop((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SequencerAdaptor::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SequencerAdaptor::signalTicks)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SequencerAdaptor::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SequencerAdaptor::finished)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SequencerAdaptor::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SequencerAdaptor.data,
    qt_meta_data_SequencerAdaptor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SequencerAdaptor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SequencerAdaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SequencerAdaptor.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SequencerAdaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void SequencerAdaptor::signalTicks(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SequencerAdaptor::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
