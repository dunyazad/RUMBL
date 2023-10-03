cmake_minimum_required(VERSION 3.5...3.22)

project(RUMBL)

add_subdirectory("External/polyscope")

add_executable(RUMBL src/main.cpp)

target_link_libraries(RUMBL polyscope)