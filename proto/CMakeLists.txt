INCLUDE(FindProtobuf)
FIND_PACKAGE(Protobuf REQUIRED)

if (protobuf_MODULE_COMPATIBLE) #Legacy mode
    INCLUDE_DIRECTORIES(${PROTOBUF_INCLUDE_DIR})
endif ()

PROTOBUF_GENERATE_CPP(PROTO_SRC PROTO_HEADER config.proto)

ADD_LIBRARY(proto ${PROTO_HEADER} ${PROTO_SRC})

if (NOT protobuf_MODULE_COMPATIBLE)
    target_link_libraries(proto protobuf::libprotobuf)
endif ()
