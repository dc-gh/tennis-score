cmake_minimum_required(VERSION 3.10)

project(TennisGame)

set(CMAKE_CXX_STANDARD 23)

include_directories(include)

add_library(tennis_game_lib
    src/tennis_game.cpp
)

add_executable(tennis_game
    main.cpp
)

target_link_libraries(tennis_game PRIVATE tennis_game_lib)

# Testing

include(FetchContent)

FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/heads/main.zip
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_subdirectory(test)
