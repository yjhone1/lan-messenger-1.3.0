/****************************************************************************
** Meta object code from reading C++ file 'remoteviewerwindow.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../lmc/src/remote/remoteviewerwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'remoteviewerwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.10.2. It"
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
struct qt_meta_tag_ZN18RemoteCanvasWidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto RemoteCanvasWidget::qt_create_metaobjectdata<qt_meta_tag_ZN18RemoteCanvasWidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "RemoteCanvasWidget",
        "mouseMoved",
        "",
        "x",
        "y",
        "mouseButtonPressed",
        "RemoteMouseEventType",
        "type",
        "Qt::MouseButton",
        "button",
        "mouseButtonReleased",
        "mouseWheeled",
        "delta",
        "keyPressed",
        "RemoteKeyEventType",
        "key",
        "Qt::KeyboardModifiers",
        "modifiers",
        "keyReleased"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'mouseMoved'
        QtMocHelpers::SignalData<void(quint32, quint32)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 3 }, { QMetaType::UInt, 4 },
        }}),
        // Signal 'mouseButtonPressed'
        QtMocHelpers::SignalData<void(RemoteMouseEventType, Qt::MouseButton, quint32, quint32)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 }, { 0x80000000 | 8, 9 }, { QMetaType::UInt, 3 }, { QMetaType::UInt, 4 },
        }}),
        // Signal 'mouseButtonReleased'
        QtMocHelpers::SignalData<void(RemoteMouseEventType, Qt::MouseButton, quint32, quint32)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 }, { 0x80000000 | 8, 9 }, { QMetaType::UInt, 3 }, { QMetaType::UInt, 4 },
        }}),
        // Signal 'mouseWheeled'
        QtMocHelpers::SignalData<void(qint32, quint32, quint32)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 12 }, { QMetaType::UInt, 3 }, { QMetaType::UInt, 4 },
        }}),
        // Signal 'keyPressed'
        QtMocHelpers::SignalData<void(RemoteKeyEventType, quint32, Qt::KeyboardModifiers)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 14, 7 }, { QMetaType::UInt, 15 }, { 0x80000000 | 16, 17 },
        }}),
        // Signal 'keyReleased'
        QtMocHelpers::SignalData<void(RemoteKeyEventType, quint32, Qt::KeyboardModifiers)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 14, 7 }, { QMetaType::UInt, 15 }, { 0x80000000 | 16, 17 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<RemoteCanvasWidget, qt_meta_tag_ZN18RemoteCanvasWidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject RemoteCanvasWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18RemoteCanvasWidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18RemoteCanvasWidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN18RemoteCanvasWidgetE_t>.metaTypes,
    nullptr
} };

void RemoteCanvasWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<RemoteCanvasWidget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->mouseMoved((*reinterpret_cast<std::add_pointer_t<quint32>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<quint32>>(_a[2]))); break;
        case 1: _t->mouseButtonPressed((*reinterpret_cast<std::add_pointer_t<RemoteMouseEventType>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Qt::MouseButton>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<quint32>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<quint32>>(_a[4]))); break;
        case 2: _t->mouseButtonReleased((*reinterpret_cast<std::add_pointer_t<RemoteMouseEventType>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Qt::MouseButton>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<quint32>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<quint32>>(_a[4]))); break;
        case 3: _t->mouseWheeled((*reinterpret_cast<std::add_pointer_t<qint32>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<quint32>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<quint32>>(_a[3]))); break;
        case 4: _t->keyPressed((*reinterpret_cast<std::add_pointer_t<RemoteKeyEventType>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<quint32>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<Qt::KeyboardModifiers>>(_a[3]))); break;
        case 5: _t->keyReleased((*reinterpret_cast<std::add_pointer_t<RemoteKeyEventType>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<quint32>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<Qt::KeyboardModifiers>>(_a[3]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (RemoteCanvasWidget::*)(quint32 , quint32 )>(_a, &RemoteCanvasWidget::mouseMoved, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (RemoteCanvasWidget::*)(RemoteMouseEventType , Qt::MouseButton , quint32 , quint32 )>(_a, &RemoteCanvasWidget::mouseButtonPressed, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (RemoteCanvasWidget::*)(RemoteMouseEventType , Qt::MouseButton , quint32 , quint32 )>(_a, &RemoteCanvasWidget::mouseButtonReleased, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (RemoteCanvasWidget::*)(qint32 , quint32 , quint32 )>(_a, &RemoteCanvasWidget::mouseWheeled, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (RemoteCanvasWidget::*)(RemoteKeyEventType , quint32 , Qt::KeyboardModifiers )>(_a, &RemoteCanvasWidget::keyPressed, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (RemoteCanvasWidget::*)(RemoteKeyEventType , quint32 , Qt::KeyboardModifiers )>(_a, &RemoteCanvasWidget::keyReleased, 5))
            return;
    }
}

const QMetaObject *RemoteCanvasWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RemoteCanvasWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18RemoteCanvasWidgetE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int RemoteCanvasWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void RemoteCanvasWidget::mouseMoved(quint32 _t1, quint32 _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void RemoteCanvasWidget::mouseButtonPressed(RemoteMouseEventType _t1, Qt::MouseButton _t2, quint32 _t3, quint32 _t4)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2, _t3, _t4);
}

// SIGNAL 2
void RemoteCanvasWidget::mouseButtonReleased(RemoteMouseEventType _t1, Qt::MouseButton _t2, quint32 _t3, quint32 _t4)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2, _t3, _t4);
}

// SIGNAL 3
void RemoteCanvasWidget::mouseWheeled(qint32 _t1, quint32 _t2, quint32 _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1, _t2, _t3);
}

// SIGNAL 4
void RemoteCanvasWidget::keyPressed(RemoteKeyEventType _t1, quint32 _t2, Qt::KeyboardModifiers _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1, _t2, _t3);
}

// SIGNAL 5
void RemoteCanvasWidget::keyReleased(RemoteKeyEventType _t1, quint32 _t2, Qt::KeyboardModifiers _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1, _t2, _t3);
}
namespace {
struct qt_meta_tag_ZN18RemoteViewerWindowE_t {};
} // unnamed namespace

template <> constexpr inline auto RemoteViewerWindow::qt_create_metaobjectdata<qt_meta_tag_ZN18RemoteViewerWindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "RemoteViewerWindow",
        "viewerClosed",
        "",
        "targetUserId",
        "onConnected",
        "onDisconnected",
        "onConnectionError",
        "errorMsg",
        "onInitInfoReceived",
        "screenWidth",
        "screenHeight",
        "onFrameReceived",
        "QPixmap",
        "pixmap",
        "onControlToggled",
        "checked",
        "onFitToggled",
        "onDisconnectClicked"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'viewerClosed'
        QtMocHelpers::SignalData<void(const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Slot 'onConnected'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onDisconnected'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onConnectionError'
        QtMocHelpers::SlotData<void(const QString &)>(6, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 7 },
        }}),
        // Slot 'onInitInfoReceived'
        QtMocHelpers::SlotData<void(quint32, quint32)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::UInt, 9 }, { QMetaType::UInt, 10 },
        }}),
        // Slot 'onFrameReceived'
        QtMocHelpers::SlotData<void(const QPixmap &)>(11, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 12, 13 },
        }}),
        // Slot 'onControlToggled'
        QtMocHelpers::SlotData<void(bool)>(14, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 15 },
        }}),
        // Slot 'onFitToggled'
        QtMocHelpers::SlotData<void(bool)>(16, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 15 },
        }}),
        // Slot 'onDisconnectClicked'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<RemoteViewerWindow, qt_meta_tag_ZN18RemoteViewerWindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject RemoteViewerWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18RemoteViewerWindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18RemoteViewerWindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN18RemoteViewerWindowE_t>.metaTypes,
    nullptr
} };

void RemoteViewerWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<RemoteViewerWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->viewerClosed((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->onConnected(); break;
        case 2: _t->onDisconnected(); break;
        case 3: _t->onConnectionError((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->onInitInfoReceived((*reinterpret_cast<std::add_pointer_t<quint32>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<quint32>>(_a[2]))); break;
        case 5: _t->onFrameReceived((*reinterpret_cast<std::add_pointer_t<QPixmap>>(_a[1]))); break;
        case 6: _t->onControlToggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->onFitToggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->onDisconnectClicked(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (RemoteViewerWindow::*)(const QString & )>(_a, &RemoteViewerWindow::viewerClosed, 0))
            return;
    }
}

const QMetaObject *RemoteViewerWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RemoteViewerWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18RemoteViewerWindowE_t>.strings))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int RemoteViewerWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void RemoteViewerWindow::viewerClosed(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
QT_WARNING_POP
