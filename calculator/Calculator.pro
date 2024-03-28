QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    src/main.cpp \
    src/calculator.cpp

HEADERS += \
    headers/calculator.h

FORMS += \
    ui/calculator.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources/resources.qrc


INCLUDEPATH += $$PWD/../muparser/include
LIBS += -L$$PWD/../muparser/lib -lmuParser



# unix:!macx: LIBS += -L$$PWD/../muparser-2.3.4/ -lmuparser

# INCLUDEPATH += $$PWD/../muparser-2.3.4
# DEPENDPATH += $$PWD/../muparser-2.3.4

# win32:CONFIG(release, debug|release): LIBS += -L$$PWD/headers/muparser-2.3.4/release/ -lmuparser
# else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/headers/muparser-2.3.4/debug/ -lmuparser
# unix:!macx: LIBS += -L$$PWD/headers/muparser-2.3.4/ -lmuparser

# INCLUDEPATH += $$PWD/headers/muparser-2.3.4
# DEPENDPATH += $$PWD/headers/muparser-2.3.4
