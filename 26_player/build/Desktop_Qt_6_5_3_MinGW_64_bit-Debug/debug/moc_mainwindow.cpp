/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "sigSendFileName",
    "",
    "fileName",
    "do_stateChanged",
    "QMediaPlayer::PlaybackState",
    "state",
    "do_sourceChanged",
    "media",
    "do_durationChanged",
    "duration",
    "do_positionChanged",
    "position",
    "do_close",
    "do_openFile",
    "do_openFolder",
    "do_changeSpeed",
    "value",
    "do_changeFastForward",
    "do_opencvBright",
    "do_buildBtnShowList",
    "on_btnAdd_clicked",
    "on_btnPlay_clicked",
    "checked",
    "on_btnStop_clicked",
    "on_btnSound_clicked",
    "on_sliderPosition_valueChanged",
    "on_btnFullScreen_clicked",
    "on_btnLoop_clicked",
    "on_listWidget_doubleClicked",
    "QModelIndex",
    "index",
    "on_btnPrevious_clicked",
    "on_btnNext_clicked",
    "do_volumnValueChanged",
    "on_btnRemove_clicked",
    "on_btnClear_clicked",
    "on_btnEffect_clicked",
    "on_btnOneLoop_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[78];
    char stringdata0[11];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[16];
    char stringdata5[28];
    char stringdata6[6];
    char stringdata7[17];
    char stringdata8[6];
    char stringdata9[19];
    char stringdata10[9];
    char stringdata11[19];
    char stringdata12[9];
    char stringdata13[9];
    char stringdata14[12];
    char stringdata15[14];
    char stringdata16[15];
    char stringdata17[6];
    char stringdata18[21];
    char stringdata19[16];
    char stringdata20[20];
    char stringdata21[18];
    char stringdata22[19];
    char stringdata23[8];
    char stringdata24[19];
    char stringdata25[20];
    char stringdata26[31];
    char stringdata27[25];
    char stringdata28[19];
    char stringdata29[28];
    char stringdata30[12];
    char stringdata31[6];
    char stringdata32[23];
    char stringdata33[19];
    char stringdata34[22];
    char stringdata35[21];
    char stringdata36[20];
    char stringdata37[21];
    char stringdata38[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 15),  // "sigSendFileName"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 8),  // "fileName"
        QT_MOC_LITERAL(37, 15),  // "do_stateChanged"
        QT_MOC_LITERAL(53, 27),  // "QMediaPlayer::PlaybackState"
        QT_MOC_LITERAL(81, 5),  // "state"
        QT_MOC_LITERAL(87, 16),  // "do_sourceChanged"
        QT_MOC_LITERAL(104, 5),  // "media"
        QT_MOC_LITERAL(110, 18),  // "do_durationChanged"
        QT_MOC_LITERAL(129, 8),  // "duration"
        QT_MOC_LITERAL(138, 18),  // "do_positionChanged"
        QT_MOC_LITERAL(157, 8),  // "position"
        QT_MOC_LITERAL(166, 8),  // "do_close"
        QT_MOC_LITERAL(175, 11),  // "do_openFile"
        QT_MOC_LITERAL(187, 13),  // "do_openFolder"
        QT_MOC_LITERAL(201, 14),  // "do_changeSpeed"
        QT_MOC_LITERAL(216, 5),  // "value"
        QT_MOC_LITERAL(222, 20),  // "do_changeFastForward"
        QT_MOC_LITERAL(243, 15),  // "do_opencvBright"
        QT_MOC_LITERAL(259, 19),  // "do_buildBtnShowList"
        QT_MOC_LITERAL(279, 17),  // "on_btnAdd_clicked"
        QT_MOC_LITERAL(297, 18),  // "on_btnPlay_clicked"
        QT_MOC_LITERAL(316, 7),  // "checked"
        QT_MOC_LITERAL(324, 18),  // "on_btnStop_clicked"
        QT_MOC_LITERAL(343, 19),  // "on_btnSound_clicked"
        QT_MOC_LITERAL(363, 30),  // "on_sliderPosition_valueChanged"
        QT_MOC_LITERAL(394, 24),  // "on_btnFullScreen_clicked"
        QT_MOC_LITERAL(419, 18),  // "on_btnLoop_clicked"
        QT_MOC_LITERAL(438, 27),  // "on_listWidget_doubleClicked"
        QT_MOC_LITERAL(466, 11),  // "QModelIndex"
        QT_MOC_LITERAL(478, 5),  // "index"
        QT_MOC_LITERAL(484, 22),  // "on_btnPrevious_clicked"
        QT_MOC_LITERAL(507, 18),  // "on_btnNext_clicked"
        QT_MOC_LITERAL(526, 21),  // "do_volumnValueChanged"
        QT_MOC_LITERAL(548, 20),  // "on_btnRemove_clicked"
        QT_MOC_LITERAL(569, 19),  // "on_btnClear_clicked"
        QT_MOC_LITERAL(589, 20),  // "on_btnEffect_clicked"
        QT_MOC_LITERAL(610, 21)   // "on_btnOneLoop_clicked"
    },
    "MainWindow",
    "sigSendFileName",
    "",
    "fileName",
    "do_stateChanged",
    "QMediaPlayer::PlaybackState",
    "state",
    "do_sourceChanged",
    "media",
    "do_durationChanged",
    "duration",
    "do_positionChanged",
    "position",
    "do_close",
    "do_openFile",
    "do_openFolder",
    "do_changeSpeed",
    "value",
    "do_changeFastForward",
    "do_opencvBright",
    "do_buildBtnShowList",
    "on_btnAdd_clicked",
    "on_btnPlay_clicked",
    "checked",
    "on_btnStop_clicked",
    "on_btnSound_clicked",
    "on_sliderPosition_valueChanged",
    "on_btnFullScreen_clicked",
    "on_btnLoop_clicked",
    "on_listWidget_doubleClicked",
    "QModelIndex",
    "index",
    "on_btnPrevious_clicked",
    "on_btnNext_clicked",
    "do_volumnValueChanged",
    "on_btnRemove_clicked",
    "on_btnClear_clicked",
    "on_btnEffect_clicked",
    "on_btnOneLoop_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  176,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,  179,    2, 0x08,    3 /* Private */,
       7,    1,  182,    2, 0x08,    5 /* Private */,
       9,    1,  185,    2, 0x08,    7 /* Private */,
      11,    1,  188,    2, 0x08,    9 /* Private */,
      13,    0,  191,    2, 0x08,   11 /* Private */,
      14,    0,  192,    2, 0x08,   12 /* Private */,
      15,    0,  193,    2, 0x08,   13 /* Private */,
      16,    1,  194,    2, 0x08,   14 /* Private */,
      18,    1,  197,    2, 0x08,   16 /* Private */,
      19,    1,  200,    2, 0x08,   18 /* Private */,
      20,    0,  203,    2, 0x08,   20 /* Private */,
      21,    0,  204,    2, 0x08,   21 /* Private */,
      22,    1,  205,    2, 0x08,   22 /* Private */,
      24,    0,  208,    2, 0x08,   24 /* Private */,
      25,    0,  209,    2, 0x08,   25 /* Private */,
      26,    1,  210,    2, 0x08,   26 /* Private */,
      27,    0,  213,    2, 0x08,   28 /* Private */,
      28,    1,  214,    2, 0x08,   29 /* Private */,
      29,    1,  217,    2, 0x08,   31 /* Private */,
      32,    0,  220,    2, 0x08,   33 /* Private */,
      33,    0,  221,    2, 0x08,   34 /* Private */,
      34,    1,  222,    2, 0x08,   35 /* Private */,
      35,    0,  225,    2, 0x08,   37 /* Private */,
      36,    0,  226,    2, 0x08,   38 /* Private */,
      37,    1,  227,    2, 0x08,   39 /* Private */,
      38,    1,  230,    2, 0x08,   41 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QUrl,    8,
    QMetaType::Void, QMetaType::LongLong,   10,
    QMetaType::Void, QMetaType::LongLong,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, 0x80000000 | 30,   31,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, QMetaType::Bool,   23,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'sigSendFileName'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'do_stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMediaPlayer::PlaybackState, std::false_type>,
        // method 'do_sourceChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        // method 'do_durationChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'do_positionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'do_close'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'do_openFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'do_openFolder'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'do_changeSpeed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'do_changeFastForward'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'do_opencvBright'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'do_buildBtnShowList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnAdd_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnPlay_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_btnStop_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnSound_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_sliderPosition_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_btnFullScreen_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnLoop_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_listWidget_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_btnPrevious_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnNext_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'do_volumnValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_btnRemove_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnClear_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnEffect_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_btnOneLoop_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sigSendFileName((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->do_stateChanged((*reinterpret_cast< std::add_pointer_t<QMediaPlayer::PlaybackState>>(_a[1]))); break;
        case 2: _t->do_sourceChanged((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 3: _t->do_durationChanged((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 4: _t->do_positionChanged((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 5: _t->do_close(); break;
        case 6: _t->do_openFile(); break;
        case 7: _t->do_openFolder(); break;
        case 8: _t->do_changeSpeed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->do_changeFastForward((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->do_opencvBright((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->do_buildBtnShowList(); break;
        case 12: _t->on_btnAdd_clicked(); break;
        case 13: _t->on_btnPlay_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 14: _t->on_btnStop_clicked(); break;
        case 15: _t->on_btnSound_clicked(); break;
        case 16: _t->on_sliderPosition_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 17: _t->on_btnFullScreen_clicked(); break;
        case 18: _t->on_btnLoop_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 19: _t->on_listWidget_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 20: _t->on_btnPrevious_clicked(); break;
        case 21: _t->on_btnNext_clicked(); break;
        case 22: _t->do_volumnValueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 23: _t->on_btnRemove_clicked(); break;
        case 24: _t->on_btnClear_clicked(); break;
        case 25: _t->on_btnEffect_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 26: _t->on_btnOneLoop_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(QString );
            if (_t _q_method = &MainWindow::sigSendFileName; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 27)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 27;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::sigSendFileName(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
