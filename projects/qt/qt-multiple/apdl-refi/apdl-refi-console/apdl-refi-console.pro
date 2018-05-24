
PROJECT_NAME = apdl-refi-console

QT += widgets

include(../build-group.pri)

TEMPLATE = app

HEADERS += \
  $$SRC_ROOT_DIR/base32.h \


SOURCES += \
  $$SRC_DIR/main.cpp \
  $$SRC_ROOT_DIR/base32.cpp \




