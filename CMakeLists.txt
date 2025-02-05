cmake_minimum_required(VERSION 3.25)

project(RSA LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


set(CMAKE_PREFIX_PATH "C:/Qt/6.8.1/mingw_64/lib/cmake/Qt6")

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets)


add_executable(RSA 

    src/mainwindow.ui
    src/mainwindow.cpp
    src/main.cpp
    src/RSA.cpp
    src/gcd.cpp
    

)
target_link_libraries(RSA PRIVATE Qt6::Core Qt6::Gui Qt6::Widgets)