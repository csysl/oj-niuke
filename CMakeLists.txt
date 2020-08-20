cmake_minimum_required(VERSION 3.15)
project(oj)

set(CMAKE_CXX_STANDARD 17)

add_executable(oj main.cpp
#        codes_niuke/24.cpp


        )

add_compile_options(-fno-elide-constructors)    #关闭编译器优化

find_package(Threads)
target_link_libraries (${PROJECT_NAME} ${CMAKE_THREAD_LIBS_INIT})