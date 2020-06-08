/****************************************************************************
** Meta object code from reading C++ file 'sequencemodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "sequencemodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sequencemodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SequenceModel_t {
    QByteArrayData data[109];
    char stringdata0[1041];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SequenceModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SequenceModel_t qt_meta_stringdata_SequenceModel = {
    {
QT_MOC_LITERAL(0, 0, 13), // "SequenceModel"
QT_MOC_LITERAL(1, 14, 12), // "loadProgress"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 11), // "headerEvent"
QT_MOC_LITERAL(4, 40, 6), // "format"
QT_MOC_LITERAL(5, 47, 5), // "ntrks"
QT_MOC_LITERAL(6, 53, 8), // "division"
QT_MOC_LITERAL(7, 62, 15), // "trackStartEvent"
QT_MOC_LITERAL(8, 78, 13), // "trackEndEvent"
QT_MOC_LITERAL(9, 92, 15), // "endOfTrackEvent"
QT_MOC_LITERAL(10, 108, 11), // "noteOnEvent"
QT_MOC_LITERAL(11, 120, 4), // "chan"
QT_MOC_LITERAL(12, 125, 5), // "pitch"
QT_MOC_LITERAL(13, 131, 3), // "vol"
QT_MOC_LITERAL(14, 135, 12), // "noteOffEvent"
QT_MOC_LITERAL(15, 148, 13), // "keyPressEvent"
QT_MOC_LITERAL(16, 162, 5), // "press"
QT_MOC_LITERAL(17, 168, 17), // "smfCtlChangeEvent"
QT_MOC_LITERAL(18, 186, 3), // "ctl"
QT_MOC_LITERAL(19, 190, 5), // "value"
QT_MOC_LITERAL(20, 196, 14), // "pitchBendEvent"
QT_MOC_LITERAL(21, 211, 12), // "programEvent"
QT_MOC_LITERAL(22, 224, 5), // "patch"
QT_MOC_LITERAL(23, 230, 14), // "chanPressEvent"
QT_MOC_LITERAL(24, 245, 10), // "sysexEvent"
QT_MOC_LITERAL(25, 256, 4), // "data"
QT_MOC_LITERAL(26, 261, 16), // "seqSpecificEvent"
QT_MOC_LITERAL(27, 278, 13), // "metaMiscEvent"
QT_MOC_LITERAL(28, 292, 3), // "typ"
QT_MOC_LITERAL(29, 296, 9), // "textEvent"
QT_MOC_LITERAL(30, 306, 4), // "type"
QT_MOC_LITERAL(31, 311, 10), // "tempoEvent"
QT_MOC_LITERAL(32, 322, 5), // "tempo"
QT_MOC_LITERAL(33, 328, 12), // "timeSigEvent"
QT_MOC_LITERAL(34, 341, 2), // "b0"
QT_MOC_LITERAL(35, 344, 2), // "b1"
QT_MOC_LITERAL(36, 347, 2), // "b2"
QT_MOC_LITERAL(37, 350, 2), // "b3"
QT_MOC_LITERAL(38, 353, 14), // "keySigEventSMF"
QT_MOC_LITERAL(39, 368, 15), // "errorHandlerSMF"
QT_MOC_LITERAL(40, 384, 8), // "errorStr"
QT_MOC_LITERAL(41, 393, 12), // "trackHandler"
QT_MOC_LITERAL(42, 406, 5), // "track"
QT_MOC_LITERAL(43, 412, 6), // "seqNum"
QT_MOC_LITERAL(44, 419, 3), // "seq"
QT_MOC_LITERAL(45, 423, 13), // "forcedChannel"
QT_MOC_LITERAL(46, 437, 7), // "channel"
QT_MOC_LITERAL(47, 445, 10), // "forcedPort"
QT_MOC_LITERAL(48, 456, 4), // "port"
QT_MOC_LITERAL(49, 461, 10), // "smpteEvent"
QT_MOC_LITERAL(50, 472, 2), // "b4"
QT_MOC_LITERAL(51, 475, 15), // "errorHandlerWRK"
QT_MOC_LITERAL(52, 491, 12), // "unknownChunk"
QT_MOC_LITERAL(53, 504, 10), // "fileHeader"
QT_MOC_LITERAL(54, 515, 4), // "verh"
QT_MOC_LITERAL(55, 520, 4), // "verl"
QT_MOC_LITERAL(56, 525, 8), // "endOfWrk"
QT_MOC_LITERAL(57, 534, 14), // "streamEndEvent"
QT_MOC_LITERAL(58, 549, 4), // "time"
QT_MOC_LITERAL(59, 554, 11), // "trackHeader"
QT_MOC_LITERAL(60, 566, 5), // "name1"
QT_MOC_LITERAL(61, 572, 5), // "name2"
QT_MOC_LITERAL(62, 578, 7), // "trackno"
QT_MOC_LITERAL(63, 586, 8), // "velocity"
QT_MOC_LITERAL(64, 595, 8), // "selected"
QT_MOC_LITERAL(65, 604, 5), // "muted"
QT_MOC_LITERAL(66, 610, 4), // "loop"
QT_MOC_LITERAL(67, 615, 8), // "timeBase"
QT_MOC_LITERAL(68, 624, 8), // "timebase"
QT_MOC_LITERAL(69, 633, 10), // "globalVars"
QT_MOC_LITERAL(70, 644, 9), // "noteEvent"
QT_MOC_LITERAL(71, 654, 3), // "dur"
QT_MOC_LITERAL(72, 658, 17), // "wrkCtlChangeEvent"
QT_MOC_LITERAL(73, 676, 4), // "bank"
QT_MOC_LITERAL(74, 681, 14), // "sysexEventBank"
QT_MOC_LITERAL(75, 696, 4), // "name"
QT_MOC_LITERAL(76, 701, 8), // "autosend"
QT_MOC_LITERAL(77, 710, 3), // "bar"
QT_MOC_LITERAL(78, 714, 3), // "num"
QT_MOC_LITERAL(79, 718, 3), // "den"
QT_MOC_LITERAL(80, 722, 14), // "keySigEventWRK"
QT_MOC_LITERAL(81, 737, 3), // "alt"
QT_MOC_LITERAL(82, 741, 10), // "trackPatch"
QT_MOC_LITERAL(83, 752, 8), // "comments"
QT_MOC_LITERAL(84, 761, 3), // "cmt"
QT_MOC_LITERAL(85, 765, 14), // "variableRecord"
QT_MOC_LITERAL(86, 780, 14), // "newTrackHeader"
QT_MOC_LITERAL(87, 795, 9), // "trackName"
QT_MOC_LITERAL(88, 805, 8), // "trackVol"
QT_MOC_LITERAL(89, 814, 9), // "trackBank"
QT_MOC_LITERAL(90, 824, 7), // "segment"
QT_MOC_LITERAL(91, 832, 5), // "chord"
QT_MOC_LITERAL(92, 838, 10), // "expression"
QT_MOC_LITERAL(93, 849, 4), // "code"
QT_MOC_LITERAL(94, 854, 4), // "text"
QT_MOC_LITERAL(95, 859, 15), // "oveErrorHandler"
QT_MOC_LITERAL(96, 875, 13), // "oveFileHeader"
QT_MOC_LITERAL(97, 889, 7), // "quarter"
QT_MOC_LITERAL(98, 897, 10), // "trackCount"
QT_MOC_LITERAL(99, 908, 14), // "oveNoteOnEvent"
QT_MOC_LITERAL(100, 923, 4), // "tick"
QT_MOC_LITERAL(101, 928, 15), // "oveNoteOffEvent"
QT_MOC_LITERAL(102, 944, 13), // "oveTrackPatch"
QT_MOC_LITERAL(103, 958, 11), // "oveTrackVol"
QT_MOC_LITERAL(104, 970, 12), // "oveTrackBank"
QT_MOC_LITERAL(105, 983, 12), // "oveTextEvent"
QT_MOC_LITERAL(106, 996, 15), // "oveTimeSigEvent"
QT_MOC_LITERAL(107, 1012, 14), // "oveKeySigEvent"
QT_MOC_LITERAL(108, 1027, 13) // "oveTempoEvent"

    },
    "SequenceModel\0loadProgress\0\0headerEvent\0"
    "format\0ntrks\0division\0trackStartEvent\0"
    "trackEndEvent\0endOfTrackEvent\0noteOnEvent\0"
    "chan\0pitch\0vol\0noteOffEvent\0keyPressEvent\0"
    "press\0smfCtlChangeEvent\0ctl\0value\0"
    "pitchBendEvent\0programEvent\0patch\0"
    "chanPressEvent\0sysexEvent\0data\0"
    "seqSpecificEvent\0metaMiscEvent\0typ\0"
    "textEvent\0type\0tempoEvent\0tempo\0"
    "timeSigEvent\0b0\0b1\0b2\0b3\0keySigEventSMF\0"
    "errorHandlerSMF\0errorStr\0trackHandler\0"
    "track\0seqNum\0seq\0forcedChannel\0channel\0"
    "forcedPort\0port\0smpteEvent\0b4\0"
    "errorHandlerWRK\0unknownChunk\0fileHeader\0"
    "verh\0verl\0endOfWrk\0streamEndEvent\0"
    "time\0trackHeader\0name1\0name2\0trackno\0"
    "velocity\0selected\0muted\0loop\0timeBase\0"
    "timebase\0globalVars\0noteEvent\0dur\0"
    "wrkCtlChangeEvent\0bank\0sysexEventBank\0"
    "name\0autosend\0bar\0num\0den\0keySigEventWRK\0"
    "alt\0trackPatch\0comments\0cmt\0variableRecord\0"
    "newTrackHeader\0trackName\0trackVol\0"
    "trackBank\0segment\0chord\0expression\0"
    "code\0text\0oveErrorHandler\0oveFileHeader\0"
    "quarter\0trackCount\0oveNoteOnEvent\0"
    "tick\0oveNoteOffEvent\0oveTrackPatch\0"
    "oveTrackVol\0oveTrackBank\0oveTextEvent\0"
    "oveTimeSigEvent\0oveKeySigEvent\0"
    "oveTempoEvent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SequenceModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      66,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  344,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    3,  347,    2, 0x0a /* Public */,
       7,    0,  354,    2, 0x0a /* Public */,
       8,    0,  355,    2, 0x0a /* Public */,
       9,    0,  356,    2, 0x0a /* Public */,
      10,    3,  357,    2, 0x0a /* Public */,
      14,    3,  364,    2, 0x0a /* Public */,
      15,    3,  371,    2, 0x0a /* Public */,
      17,    3,  378,    2, 0x0a /* Public */,
      20,    2,  385,    2, 0x0a /* Public */,
      21,    2,  390,    2, 0x0a /* Public */,
      23,    2,  395,    2, 0x0a /* Public */,
      24,    1,  400,    2, 0x0a /* Public */,
      26,    1,  403,    2, 0x0a /* Public */,
      27,    2,  406,    2, 0x0a /* Public */,
      29,    2,  411,    2, 0x0a /* Public */,
      31,    1,  416,    2, 0x0a /* Public */,
      33,    4,  419,    2, 0x0a /* Public */,
      38,    2,  428,    2, 0x0a /* Public */,
      39,    1,  433,    2, 0x0a /* Public */,
      41,    1,  436,    2, 0x0a /* Public */,
      43,    1,  439,    2, 0x0a /* Public */,
      45,    1,  442,    2, 0x0a /* Public */,
      47,    1,  445,    2, 0x0a /* Public */,
      49,    5,  448,    2, 0x0a /* Public */,
      51,    1,  459,    2, 0x0a /* Public */,
      52,    2,  462,    2, 0x0a /* Public */,
      53,    2,  467,    2, 0x0a /* Public */,
      56,    0,  472,    2, 0x0a /* Public */,
      57,    1,  473,    2, 0x0a /* Public */,
      59,   10,  476,    2, 0x0a /* Public */,
      67,    1,  497,    2, 0x0a /* Public */,
      69,    0,  500,    2, 0x0a /* Public */,
      70,    6,  501,    2, 0x0a /* Public */,
      15,    5,  514,    2, 0x0a /* Public */,
      72,    5,  525,    2, 0x0a /* Public */,
      20,    4,  536,    2, 0x0a /* Public */,
      21,    4,  545,    2, 0x0a /* Public */,
      23,    4,  554,    2, 0x0a /* Public */,
      24,    3,  563,    2, 0x0a /* Public */,
      74,    5,  570,    2, 0x0a /* Public */,
      29,    4,  581,    2, 0x0a /* Public */,
      33,    3,  590,    2, 0x0a /* Public */,
      80,    2,  597,    2, 0x0a /* Public */,
      31,    2,  602,    2, 0x0a /* Public */,
      82,    2,  607,    2, 0x0a /* Public */,
      83,    1,  612,    2, 0x0a /* Public */,
      85,    2,  615,    2, 0x0a /* Public */,
      86,    9,  620,    2, 0x0a /* Public */,
      87,    2,  639,    2, 0x0a /* Public */,
      88,    2,  644,    2, 0x0a /* Public */,
      89,    2,  649,    2, 0x0a /* Public */,
      90,    3,  654,    2, 0x0a /* Public */,
      91,    4,  661,    2, 0x0a /* Public */,
      92,    4,  670,    2, 0x0a /* Public */,
      95,    1,  679,    2, 0x0a /* Public */,
      96,    2,  682,    2, 0x0a /* Public */,
      99,    5,  687,    2, 0x0a /* Public */,
     101,    5,  698,    2, 0x0a /* Public */,
     102,    3,  709,    2, 0x0a /* Public */,
     103,    3,  716,    2, 0x0a /* Public */,
     104,    3,  723,    2, 0x0a /* Public */,
     105,    3,  730,    2, 0x0a /* Public */,
     106,    4,  737,    2, 0x0a /* Public */,
     107,    3,  746,    2, 0x0a /* Public */,
     108,    2,  753,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    4,    5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   11,   12,   13,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   11,   12,   13,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   11,   12,   16,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   11,   18,   19,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   11,   19,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   11,   22,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   11,   16,
    QMetaType::Void, QMetaType::QByteArray,   25,
    QMetaType::Void, QMetaType::QByteArray,   25,
    QMetaType::Void, QMetaType::Int, QMetaType::QByteArray,   28,   25,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   30,   25,
    QMetaType::Void, QMetaType::Int,   32,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   34,   35,   36,   37,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   34,   35,
    QMetaType::Void, QMetaType::QString,   40,
    QMetaType::Void, QMetaType::Int,   42,
    QMetaType::Void, QMetaType::Int,   44,
    QMetaType::Void, QMetaType::Int,   46,
    QMetaType::Void, QMetaType::Int,   48,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   34,   35,   36,   37,   50,
    QMetaType::Void, QMetaType::QString,   40,
    QMetaType::Void, QMetaType::Int, QMetaType::QByteArray,   30,   25,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   54,   55,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Long,   58,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   60,   61,   62,   46,   12,   63,   48,   64,   65,   66,
    QMetaType::Void, QMetaType::Int,   68,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Long, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   42,   58,   11,   12,   13,   71,
    QMetaType::Void, QMetaType::Int, QMetaType::Long, QMetaType::Int, QMetaType::Int, QMetaType::Int,   42,   58,   11,   12,   16,
    QMetaType::Void, QMetaType::Int, QMetaType::Long, QMetaType::Int, QMetaType::Int, QMetaType::Int,   42,   58,   11,   18,   19,
    QMetaType::Void, QMetaType::Int, QMetaType::Long, QMetaType::Int, QMetaType::Int,   42,   58,   11,   19,
    QMetaType::Void, QMetaType::Int, QMetaType::Long, QMetaType::Int, QMetaType::Int,   42,   58,   11,   22,
    QMetaType::Void, QMetaType::Int, QMetaType::Long, QMetaType::Int, QMetaType::Int,   42,   58,   11,   16,
    QMetaType::Void, QMetaType::Int, QMetaType::Long, QMetaType::Int,   42,   58,   73,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Bool, QMetaType::Int, QMetaType::QByteArray,   73,   75,   76,   48,   25,
    QMetaType::Void, QMetaType::Int, QMetaType::Long, QMetaType::Int, QMetaType::QString,   42,   58,   28,   25,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   77,   78,   79,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   77,   81,
    QMetaType::Void, QMetaType::Long, QMetaType::Int,   58,   32,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   42,   22,
    QMetaType::Void, QMetaType::QString,   84,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray,   75,   25,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   75,   62,   46,   12,   63,   48,   64,   65,   66,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   62,   75,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   42,   13,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   42,   73,
    QMetaType::Void, QMetaType::Int, QMetaType::Long, QMetaType::QString,   42,   58,   75,
    QMetaType::Void, QMetaType::Int, QMetaType::Long, QMetaType::QString, QMetaType::QByteArray,   42,   58,   75,   25,
    QMetaType::Void, QMetaType::Int, QMetaType::Long, QMetaType::Int, QMetaType::QString,   42,   58,   93,   94,
    QMetaType::Void, QMetaType::QString,   40,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   97,   98,
    QMetaType::Void, QMetaType::Int, QMetaType::Long, QMetaType::Int, QMetaType::Int, QMetaType::Int,   42,  100,   46,   12,   13,
    QMetaType::Void, QMetaType::Int, QMetaType::Long, QMetaType::Int, QMetaType::Int, QMetaType::Int,   42,  100,   46,   12,   13,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   42,   46,   22,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   42,   46,   13,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   42,   46,   73,
    QMetaType::Void, QMetaType::Int, QMetaType::Long, QMetaType::QString,   42,  100,   25,
    QMetaType::Void, QMetaType::Int, QMetaType::Long, QMetaType::Int, QMetaType::Int,   77,  100,   78,   79,
    QMetaType::Void, QMetaType::Int, QMetaType::Long, QMetaType::Int,   77,  100,   81,
    QMetaType::Void, QMetaType::Long, QMetaType::Int,   58,   32,

       0        // eod
};

void SequenceModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SequenceModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->headerEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->trackStartEvent(); break;
        case 3: _t->trackEndEvent(); break;
        case 4: _t->endOfTrackEvent(); break;
        case 5: _t->noteOnEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: _t->noteOffEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 7: _t->keyPressEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 8: _t->smfCtlChangeEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 9: _t->pitchBendEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->programEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->chanPressEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->sysexEvent((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 13: _t->seqSpecificEvent((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 14: _t->metaMiscEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 15: _t->textEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 16: _t->tempoEvent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->timeSigEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 18: _t->keySigEventSMF((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 19: _t->errorHandlerSMF((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 20: _t->trackHandler((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->seqNum((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->forcedChannel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->forcedPort((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->smpteEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 25: _t->errorHandlerWRK((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 26: _t->unknownChunk((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 27: _t->fileHeader((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 28: _t->endOfWrk(); break;
        case 29: _t->streamEndEvent((*reinterpret_cast< long(*)>(_a[1]))); break;
        case 30: _t->trackHeader((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7])),(*reinterpret_cast< bool(*)>(_a[8])),(*reinterpret_cast< bool(*)>(_a[9])),(*reinterpret_cast< bool(*)>(_a[10]))); break;
        case 31: _t->timeBase((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->globalVars(); break;
        case 33: _t->noteEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< long(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 34: _t->keyPressEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< long(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 35: _t->wrkCtlChangeEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< long(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 36: _t->pitchBendEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< long(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 37: _t->programEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< long(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 38: _t->chanPressEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< long(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 39: _t->sysexEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< long(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 40: _t->sysexEventBank((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< const QByteArray(*)>(_a[5]))); break;
        case 41: _t->textEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< long(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 42: _t->timeSigEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 43: _t->keySigEventWRK((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 44: _t->tempoEvent((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 45: _t->trackPatch((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 46: _t->comments((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 47: _t->variableRecord((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 48: _t->newTrackHeader((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< bool(*)>(_a[7])),(*reinterpret_cast< bool(*)>(_a[8])),(*reinterpret_cast< bool(*)>(_a[9]))); break;
        case 49: _t->trackName((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 50: _t->trackVol((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 51: _t->trackBank((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 52: _t->segment((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< long(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 53: _t->chord((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< long(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QByteArray(*)>(_a[4]))); break;
        case 54: _t->expression((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< long(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 55: _t->oveErrorHandler((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 56: _t->oveFileHeader((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 57: _t->oveNoteOnEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< long(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 58: _t->oveNoteOffEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< long(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 59: _t->oveTrackPatch((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 60: _t->oveTrackVol((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 61: _t->oveTrackBank((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 62: _t->oveTextEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< long(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 63: _t->oveTimeSigEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< long(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 64: _t->oveKeySigEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< long(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 65: _t->oveTempoEvent((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SequenceModel::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SequenceModel::loadProgress)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SequenceModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractItemModel::staticMetaObject>(),
    qt_meta_stringdata_SequenceModel.data,
    qt_meta_data_SequenceModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SequenceModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SequenceModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SequenceModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int SequenceModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 66)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 66;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 66)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 66;
    }
    return _id;
}

// SIGNAL 0
void SequenceModel::loadProgress(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
