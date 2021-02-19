cmake_minimum_required(VERSION 3.12)

set(ENTRY_POINT entry.c)
set(LIB_NAME raspi_pico_rs_template)
set(RESULT_FILE_NAME pico)
set(PROFILE release)
#set(PROFILE debug)

set(PICO_SDK_FETCH_FROM_GIT on)
include(pico_sdk_import.cmake)

project(my_project)
pico_sdk_init()

if (${PROFILE} STREQUAL "release")
    set(CARGO_BUILD_ARGS "--release")
    set(LIBRARY_DIRECTORY release)
elseif (${PROFILE} STREQUAL "debug")
    set(CARGO_BUILD_ARGS "")
    set(LIBRARY_DIRECTORY debug)
else ()
    message(FATAL_ERROR "PROFILE should be \"debug\" or \"release\"")
endif ()

message("PICO_SDK_PATH=${PICO_SDK_PATH}")
get_filename_component(ENTRY_ABSOLUTE ${ENTRY_POINT} ABSOLUTE)
add_custom_target(cargo ALL
        COMMAND ${CMAKE_COMMAND}
        -E env
        "PICO_SDK_RS_C_BINDING_ALTERNATIVES=${ENTRY_ABSOLUTE}"
        "PICO_SDK_RS_CUSTOM_ENTRY_POINT=${ENTRY_ABSOLUTE}"
        "PICO_SDK_PATH=${PICO_SDK_PATH}"
        cargo build --target thumbv6m-none-eabi ${CARGO_BUILD_ARGS}
        WORKING_DIRECTORY ..)

add_custom_target(doc
        COMMAND ${CMAKE_COMMAND}
        -E env
        "PICO_SDK_RS_C_BINDING_ALTERNATIVES=${ENTRY_ABSOLUTE}"
        "PICO_SDK_RS_CUSTOM_ENTRY_POINT=${ENTRY_ABSOLUTE}"
        "PICO_SDK_PATH=${PICO_SDK_PATH}"
        cargo doc --target thumbv6m-none-eabi ${CARGO_BUILD_ARGS}
        WORKING_DIRECTORY ..)

add_executable(${RESULT_FILE_NAME} entry.c)
add_dependencies(${RESULT_FILE_NAME} cargo)
get_filename_component(LIB_ABSOLUTE ../target/thumbv6m-none-eabi/${LIBRARY_DIRECTORY}/lib${LIB_NAME}.a ABSOLUTE)
target_link_libraries(${RESULT_FILE_NAME} ${LIB_ABSOLUTE})
target_link_libraries(${RESULT_FILE_NAME} pico_stdlib)

pico_add_extra_outputs(${RESULT_FILE_NAME})
