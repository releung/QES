QT += core gui

TEMPLATE = lib
CONFIG += plugin

CONFIG(debug, debug|release){
    DESTDIR = $$OUT_PWD/../../app/debug/plugins/
    LIBS += -L$$OUT_PWD/../../../3rdparty/extensionsystem/debug/ -lextensionsystem
} else {
    DESTDIR = $$OUT_PWD/../../app/release/plugins/
    LIBS += -L$$OUT_PWD/../../../3rdparty/extensionsystem/release/ -lextensionsystem
}

INCLUDEPATH += $$PWD/../../../3rdparty/

SOURCES += \
    hellomyserviceimpl.cpp \
    myplugin.cpp

HEADERS += \
    hellomyservice.h \
    hellomyserviceimpl.h \
    myplugin.h

DISTFILES += myPlugin.json

# Default rules for deployment.
unix {
    target.path = $$[QT_INSTALL_PLUGINS]/generic
}
!isEmpty(target.path): INSTALLS += target
