/****************************************************************************
** Meta object code from reading C++ file 'kmidimon.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "kmidimon.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kmidimon.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KMidimon_t {
    QByteArrayData data[73];
    char stringdata0[784];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KMidimon_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KMidimon_t qt_meta_stringdata_KMidimon = {
    {
QT_MOC_LITERAL(0, 0, 8), // "KMidimon"
QT_MOC_LITERAL(1, 9, 7), // "fileNew"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 8), // "fileOpen"
QT_MOC_LITERAL(4, 27, 8), // "fileSave"
QT_MOC_LITERAL(5, 36, 11), // "preferences"
QT_MOC_LITERAL(6, 48, 6), // "record"
QT_MOC_LITERAL(7, 55, 4), // "stop"
QT_MOC_LITERAL(8, 60, 4), // "play"
QT_MOC_LITERAL(9, 65, 5), // "pause"
QT_MOC_LITERAL(10, 71, 6), // "rewind"
QT_MOC_LITERAL(11, 78, 7), // "forward"
QT_MOC_LITERAL(12, 86, 10), // "connectAll"
QT_MOC_LITERAL(13, 97, 8), // "addTrack"
QT_MOC_LITERAL(14, 106, 18), // "deleteCurrentTrack"
QT_MOC_LITERAL(15, 125, 18), // "changeCurrentTrack"
QT_MOC_LITERAL(16, 144, 16), // "muteCurrentTrack"
QT_MOC_LITERAL(17, 161, 11), // "deleteTrack"
QT_MOC_LITERAL(18, 173, 8), // "tabIndex"
QT_MOC_LITERAL(19, 182, 11), // "changeTrack"
QT_MOC_LITERAL(20, 194, 9), // "muteTrack"
QT_MOC_LITERAL(21, 204, 12), // "songFinished"
QT_MOC_LITERAL(22, 217, 4), // "open"
QT_MOC_LITERAL(23, 222, 8), // "fileName"
QT_MOC_LITERAL(24, 231, 10), // "tempoReset"
QT_MOC_LITERAL(25, 242, 11), // "tempoSlider"
QT_MOC_LITERAL(26, 254, 5), // "value"
QT_MOC_LITERAL(27, 260, 8), // "slotLoop"
QT_MOC_LITERAL(28, 269, 5), // "about"
QT_MOC_LITERAL(29, 275, 4), // "help"
QT_MOC_LITERAL(30, 280, 15), // "slotOpenWebSite"
QT_MOC_LITERAL(31, 296, 13), // "disconnectAll"
QT_MOC_LITERAL(32, 310, 17), // "configConnections"
QT_MOC_LITERAL(33, 328, 11), // "updateState"
QT_MOC_LITERAL(34, 340, 11), // "PlayerState"
QT_MOC_LITERAL(35, 352, 8), // "newState"
QT_MOC_LITERAL(36, 361, 15), // "setColumnStatus"
QT_MOC_LITERAL(37, 377, 6), // "colNum"
QT_MOC_LITERAL(38, 384, 6), // "status"
QT_MOC_LITERAL(39, 391, 12), // "toggleColumn"
QT_MOC_LITERAL(40, 404, 17), // "modelRowsInserted"
QT_MOC_LITERAL(41, 422, 11), // "QModelIndex"
QT_MOC_LITERAL(42, 434, 6), // "parent"
QT_MOC_LITERAL(43, 441, 5), // "start"
QT_MOC_LITERAL(44, 447, 3), // "end"
QT_MOC_LITERAL(45, 451, 16), // "resizeAllColumns"
QT_MOC_LITERAL(46, 468, 15), // "tabIndexChanged"
QT_MOC_LITERAL(47, 484, 5), // "index"
QT_MOC_LITERAL(48, 490, 11), // "reorderTabs"
QT_MOC_LITERAL(49, 502, 9), // "fromIndex"
QT_MOC_LITERAL(50, 512, 7), // "toIndex"
QT_MOC_LITERAL(51, 520, 9), // "slotTicks"
QT_MOC_LITERAL(52, 530, 3), // "row"
QT_MOC_LITERAL(53, 534, 18), // "slotCurrentChanged"
QT_MOC_LITERAL(54, 553, 4), // "curr"
QT_MOC_LITERAL(55, 558, 4), // "prev"
QT_MOC_LITERAL(56, 563, 10), // "updateView"
QT_MOC_LITERAL(57, 574, 12), // "songFileInfo"
QT_MOC_LITERAL(58, 587, 18), // "slotSwitchLanguage"
QT_MOC_LITERAL(59, 606, 8), // "QAction*"
QT_MOC_LITERAL(60, 615, 6), // "action"
QT_MOC_LITERAL(61, 622, 10), // "closeEvent"
QT_MOC_LITERAL(62, 633, 12), // "QCloseEvent*"
QT_MOC_LITERAL(63, 646, 5), // "event"
QT_MOC_LITERAL(64, 652, 16), // "contextMenuEvent"
QT_MOC_LITERAL(65, 669, 18), // "QContextMenuEvent*"
QT_MOC_LITERAL(66, 688, 2), // "ev"
QT_MOC_LITERAL(67, 691, 9), // "dropEvent"
QT_MOC_LITERAL(68, 701, 11), // "QDropEvent*"
QT_MOC_LITERAL(69, 713, 14), // "dragEnterEvent"
QT_MOC_LITERAL(70, 728, 16), // "QDragEnterEvent*"
QT_MOC_LITERAL(71, 745, 23), // "updateRecentFileActions"
QT_MOC_LITERAL(72, 769, 14) // "openRecentFile"

    },
    "KMidimon\0fileNew\0\0fileOpen\0fileSave\0"
    "preferences\0record\0stop\0play\0pause\0"
    "rewind\0forward\0connectAll\0addTrack\0"
    "deleteCurrentTrack\0changeCurrentTrack\0"
    "muteCurrentTrack\0deleteTrack\0tabIndex\0"
    "changeTrack\0muteTrack\0songFinished\0"
    "open\0fileName\0tempoReset\0tempoSlider\0"
    "value\0slotLoop\0about\0help\0slotOpenWebSite\0"
    "disconnectAll\0configConnections\0"
    "updateState\0PlayerState\0newState\0"
    "setColumnStatus\0colNum\0status\0"
    "toggleColumn\0modelRowsInserted\0"
    "QModelIndex\0parent\0start\0end\0"
    "resizeAllColumns\0tabIndexChanged\0index\0"
    "reorderTabs\0fromIndex\0toIndex\0slotTicks\0"
    "row\0slotCurrentChanged\0curr\0prev\0"
    "updateView\0songFileInfo\0slotSwitchLanguage\0"
    "QAction*\0action\0closeEvent\0QCloseEvent*\0"
    "event\0contextMenuEvent\0QContextMenuEvent*\0"
    "ev\0dropEvent\0QDropEvent*\0dragEnterEvent\0"
    "QDragEnterEvent*\0updateRecentFileActions\0"
    "openRecentFile"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KMidimon[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      46,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  244,    2, 0x0a /* Public */,
       3,    0,  245,    2, 0x0a /* Public */,
       4,    0,  246,    2, 0x0a /* Public */,
       5,    0,  247,    2, 0x0a /* Public */,
       6,    0,  248,    2, 0x0a /* Public */,
       7,    0,  249,    2, 0x0a /* Public */,
       8,    0,  250,    2, 0x0a /* Public */,
       9,    0,  251,    2, 0x0a /* Public */,
      10,    0,  252,    2, 0x0a /* Public */,
      11,    0,  253,    2, 0x0a /* Public */,
      12,    0,  254,    2, 0x0a /* Public */,
      13,    0,  255,    2, 0x0a /* Public */,
      14,    0,  256,    2, 0x0a /* Public */,
      15,    0,  257,    2, 0x0a /* Public */,
      16,    0,  258,    2, 0x0a /* Public */,
      17,    1,  259,    2, 0x0a /* Public */,
      19,    1,  262,    2, 0x0a /* Public */,
      20,    1,  265,    2, 0x0a /* Public */,
      21,    0,  268,    2, 0x0a /* Public */,
      22,    1,  269,    2, 0x0a /* Public */,
      24,    0,  272,    2, 0x0a /* Public */,
      25,    1,  273,    2, 0x0a /* Public */,
      27,    0,  276,    2, 0x0a /* Public */,
      28,    0,  277,    2, 0x0a /* Public */,
      29,    0,  278,    2, 0x0a /* Public */,
      30,    0,  279,    2, 0x0a /* Public */,
      31,    0,  280,    2, 0x0a /* Public */,
      32,    0,  281,    2, 0x0a /* Public */,
      33,    1,  282,    2, 0x0a /* Public */,
      36,    2,  285,    2, 0x0a /* Public */,
      39,    1,  290,    2, 0x0a /* Public */,
      40,    3,  293,    2, 0x0a /* Public */,
      45,    0,  300,    2, 0x0a /* Public */,
      46,    1,  301,    2, 0x0a /* Public */,
      48,    2,  304,    2, 0x0a /* Public */,
      51,    1,  309,    2, 0x0a /* Public */,
      53,    2,  312,    2, 0x0a /* Public */,
      56,    0,  317,    2, 0x0a /* Public */,
      57,    0,  318,    2, 0x0a /* Public */,
      58,    1,  319,    2, 0x0a /* Public */,
      61,    1,  322,    2, 0x0a /* Public */,
      64,    1,  325,    2, 0x0a /* Public */,
      67,    1,  328,    2, 0x0a /* Public */,
      69,    1,  331,    2, 0x0a /* Public */,
      71,    0,  334,    2, 0x0a /* Public */,
      72,    0,  335,    2, 0x0a /* Public */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 34,   35,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   37,   38,
    QMetaType::Void, QMetaType::Int,   37,
    QMetaType::Void, 0x80000000 | 41, QMetaType::Int, QMetaType::Int,   42,   43,   44,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   47,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   49,   50,
    QMetaType::Void, QMetaType::Int,   52,
    QMetaType::Void, 0x80000000 | 41, 0x80000000 | 41,   54,   55,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 59,   60,
    QMetaType::Void, 0x80000000 | 62,   63,
    QMetaType::Void, 0x80000000 | 65,   66,
    QMetaType::Void, 0x80000000 | 68,   63,
    QMetaType::Void, 0x80000000 | 70,   63,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void KMidimon::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KMidimon *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fileNew(); break;
        case 1: _t->fileOpen(); break;
        case 2: _t->fileSave(); break;
        case 3: _t->preferences(); break;
        case 4: _t->record(); break;
        case 5: _t->stop(); break;
        case 6: _t->play(); break;
        case 7: _t->pause(); break;
        case 8: _t->rewind(); break;
        case 9: _t->forward(); break;
        case 10: _t->connectAll(); break;
        case 11: _t->addTrack(); break;
        case 12: _t->deleteCurrentTrack(); break;
        case 13: _t->changeCurrentTrack(); break;
        case 14: _t->muteCurrentTrack(); break;
        case 15: _t->deleteTrack((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->changeTrack((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->muteTrack((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->songFinished(); break;
        case 19: _t->open((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 20: _t->tempoReset(); break;
        case 21: _t->tempoSlider((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->slotLoop(); break;
        case 23: _t->about(); break;
        case 24: _t->help(); break;
        case 25: _t->slotOpenWebSite(); break;
        case 26: _t->disconnectAll(); break;
        case 27: _t->configConnections(); break;
        case 28: _t->updateState((*reinterpret_cast< PlayerState(*)>(_a[1]))); break;
        case 29: _t->setColumnStatus((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 30: _t->toggleColumn((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: _t->modelRowsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 32: _t->resizeAllColumns(); break;
        case 33: _t->tabIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 34: _t->reorderTabs((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 35: _t->slotTicks((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 36: _t->slotCurrentChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 37: _t->updateView(); break;
        case 38: _t->songFileInfo(); break;
        case 39: _t->slotSwitchLanguage((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 40: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 41: _t->contextMenuEvent((*reinterpret_cast< QContextMenuEvent*(*)>(_a[1]))); break;
        case 42: _t->dropEvent((*reinterpret_cast< QDropEvent*(*)>(_a[1]))); break;
        case 43: _t->dragEnterEvent((*reinterpret_cast< QDragEnterEvent*(*)>(_a[1]))); break;
        case 44: _t->updateRecentFileActions(); break;
        case 45: _t->openRecentFile(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KMidimon::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_KMidimon.data,
    qt_meta_data_KMidimon,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KMidimon::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KMidimon::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KMidimon.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int KMidimon::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 46)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 46;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 46)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 46;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
