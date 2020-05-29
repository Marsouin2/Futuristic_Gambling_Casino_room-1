cmake_minimum_required(VERSION 3.16)
project(Futuristic_Gambling_Casino_room_1)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

set(SOURCES src/main.cpp)

add_executable(casino_tetris ${SOURCES})
