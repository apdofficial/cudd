cmake_minimum_required(VERSION 3.14)

project(cudd_test VERSION 3.0.0 LANGUAGES C)

add_subdirectory(cudd)

add_executable(main main.c)
target_link_libraries(main PRIVATE cudd::cudd)
