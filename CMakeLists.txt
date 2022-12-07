cmake_minimum_required(VERSION 3.24)
project(G_tests_project)

# adding Google test directory
add_subdirectory(test)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})


set(CMAKE_CXX_STANDARD 17)

add_executable(Google_Tests_run main.cpp)
target_link_libraries(Google_Tests_run gtest gtest_main)
