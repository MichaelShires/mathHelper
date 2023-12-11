cmake_minimum_required(VERSION 3.27)
project(mathHelper)

set(CMAKE_CXX_STANDARD 23)

add_executable(mathHelper main.cpp
        libs/LinearAlgebra/Matrix.cpp
        libs/LinearAlgebra/Matrix.h
        libs/LinearAlgebra/Row.cpp
        libs/LinearAlgebra/Row.h)
