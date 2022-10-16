cmake_minimum_required(VERSION 3.23)
project(Matriz_y_ficheros C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(Matriz_y_ficheros
        Funciones.h
        Matriz.c)
