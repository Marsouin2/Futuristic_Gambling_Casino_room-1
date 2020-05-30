cmake_minimum_required(VERSION 3.16)
project(Futuristic_Gambling_Casino_room_1)

set(CMAKE_CXX_STANDARD 14)

set (CMAKE_CXX_FLAGS "-o sfml-app -lsfml-graphics -lsfml-window -lsfml-system")

#set(SFML_HEADER include/SFML)

set(GAMELOOP_HEADER src/Gameloop)
set(SPRITE_MANAGER_HEADER src/SpriteManager)
set(EVENT_MANAGER_HEADER src/EventManager)
set(WINDOW_MANAGER_HEADER src/WindowManager)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

set(SOURCES src/main.cpp ${GAMELOOP_HEADER}/gameloop.cpp)

add_library(mylib ${SOURCES} ${HEADER_FILES})
add_executable(casino_tetris ${SOURCES})
target_include_directories(casino_tetris PRIVATE ${HEADER_FILES})
