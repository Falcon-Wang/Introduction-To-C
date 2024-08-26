cmake_minimum_required(VERSION 3.28)
project(CPP_Primer)

set(CMAKE_CXX_STANDARD 17)

add_executable(HelloWorld HelloWorld.cpp)
add_executable(ControlFlow ControlFlow.cpp)
add_executable(SalesItem Sales_item.cpp Sales_item.h)
add_executable(BookStore BookStore.cpp Sales_item.h)
