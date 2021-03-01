cmake_minimum_required(VERSION 3.19.2)

project(FaisanIDE LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Qt6
find_package(Qt6 COMPONENTS Core)
find_package(Qt6 COMPONENTS Gui)
find_package(Qt6 COMPONENTS Widgets)

set(PROJECT_SOURCES

    #src
    src/main.cpp
)

qt_add_executable(FaisanIDE
    ${PROJECT_SOURCES}
)

target_link_libraries(FaisanIDE PRIVATE
    Qt::Core
    Qt::Gui
    Qt::Widgets
)

