cmake_minimum_required(VERSION 3.0.0)
project(SDL2_DEMO VERSION 0.1.0)

add_executable(SDL2_DEMO src/main.cpp)

target_link_libraries(SDL2_DEMO SDL2main SDL2)
