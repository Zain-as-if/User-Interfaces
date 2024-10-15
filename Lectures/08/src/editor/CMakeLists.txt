cmake_minimum_required(VERSION 3.16)

project(editor VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)
qt_standard_project_setup()

qt_add_executable(editor
    main.cpp
    window.cpp
)

target_link_libraries(editor PRIVATE Qt6::Widgets)

set_target_properties(editor PROPERTIES
    WIN32_EXECUTABLE ON
    MACOSX_BUNDLE OFF
)
