cmake_minimum_required(VERSION 3.5)

project(SnakeGame)

set(CMAKE_CXX_STANDARD 11)

find_package(Qt5Widgets REQUIRED)

add_executable(SnakeGame main.cpp snake.cpp)

target_link_libraries(SnakeGame Qt5::Widgets)
