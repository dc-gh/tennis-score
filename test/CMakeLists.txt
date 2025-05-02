add_executable(test_tennis_game
    test_tennis_game.cpp
)

target_link_libraries(test_tennis_game
    PRIVATE tennis_game_lib
    gtest_main
)

target_include_directories(test_tennis_game PRIVATE ${CMAKE_SOURCE_DIR}/include)

include(GoogleTest)
gtest_discover_tests(test_tennis_game)
