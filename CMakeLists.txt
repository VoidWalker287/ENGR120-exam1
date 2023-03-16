cmake_minimum_required(VERSION 3.23)
project(lab2 C)

set(CMAKE_C_STANDARD 99)

add_executable(exam2 main.c config.h)

target_link_libraries(exam2 m)