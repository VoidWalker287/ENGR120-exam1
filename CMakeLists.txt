cmake_minimum_required(VERSION 3.23)
project(lab2 C)

set(CMAKE_C_STANDARD 99)

add_executable(exam2 main.c config.h examProblem1.c examProblem2.c examProblem3.c examProblem4.c examProblem5.c examProblem6.c examProblem7.c examProblem8.c examProblem9.c examProblem10.c examProblem11.c examProblem12.c examProblem13.c examProblem14.c examProblem15.c examProblem16.c examProblem17.c examTrueFalse.c utils.c)

target_link_libraries(exam2 m)