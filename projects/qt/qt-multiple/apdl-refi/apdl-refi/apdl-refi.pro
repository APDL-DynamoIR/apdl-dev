
PROJECT_NAME = apdl-refi

include(../build-group.pri)


DEFINES += APDL_UNIQUE_DEFAULT_IDENTIFIER=__FILE__

HEADERS += \
  $$SRC_DIR/apdl-refi.h \
  $$SRC_DIR/apdl-basic-application.h \
  $$SRC_DIR/provenance/apdl-unique.h \
  $$SRC_DIR/provenance/apdl-annotated-data.h \
  $$SRC_DIR/deployment/apdl-local-deployment-info.h \
  $$SRC_DIR/deployment/apdl-repository-info.h \
  $$SRC_DIR/psi/kernel-bridge-interface.h \
  $$SRC_DIR/psi/kernel-component-interface.h \
  $$SRC_DIR/psi/kernel-service-interface.h \
  $$SRC_DIR/psi/public-service-interface.h \
  $$SRC_DIR/psi/channels/psi-type-expression.h \
  $$SRC_DIR/psi/channels/psi-carrier.h \
  $$SRC_DIR/psi/channels/psi-channel.h \
  $$SRC_DIR/psi/channels/psi-signature.h \




SOURCES +=  \
  $$SRC_DIR/apdl-refi.cpp \
  $$SRC_DIR/apdl-basic-application.cpp \
  $$SRC_DIR/provenance/apdl-unique.cpp \
  $$SRC_DIR/provenance/apdl-annotated-data.cpp \
  $$SRC_DIR/deployment/apdl-local-deployment-info.cpp \
  $$SRC_DIR/deployment/apdl-repository-info.cpp \
  $$SRC_DIR/psi/kernel-bridge-interface.cpp \
  $$SRC_DIR/psi/kernel-component-interface.cpp \
  $$SRC_DIR/psi/kernel-service-interface.cpp \
  $$SRC_DIR/psi/public-service-interface.cpp \
  $$SRC_DIR/psi/channels/psi-type-expression.cpp \
  $$SRC_DIR/psi/channels/psi-carrier.cpp \
  $$SRC_DIR/psi/channels/psi-channel.cpp \
  $$SRC_DIR/psi/channels/psi-signature.cpp \



