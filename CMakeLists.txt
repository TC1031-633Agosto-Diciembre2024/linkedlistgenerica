cmake_minimum_required(VERSION 3.28)
project(genericlinkedlist)

set(CMAKE_CXX_STANDARD 17)

add_executable(genericlinkedlist main.cpp
        Node.h
        Node.cpp
        LinkedList.h
        LinkedList.cpp
        User.h
        User.cpp)
