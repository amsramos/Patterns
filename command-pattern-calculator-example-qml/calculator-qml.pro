QT += qml scxml

CONFIG += c++11

SOURCES += calculator-qml.cpp \
    icommand.cpp \
    invoker.cpp \
    sumcommand.cpp \
    multiplycommand.cpp

RESOURCES += calculator-qml.qrc

STATECHARTS = ../calculator-common/statemachine.scxml

# install
target.path = $$[QT_INSTALL_EXAMPLES]/scxml/calculator-qml
INSTALLS += target

HEADERS += \
    icommand.h \
    invoker.h \
    sumcommand.h \
    multiplycommand.h
