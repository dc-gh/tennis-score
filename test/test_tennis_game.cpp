#include <gtest/gtest.h>
#include "tennis_game.h"

TEST(TennisGameTest, InitialScoreIsLoveAll) {
    Tennis game;
    EXPECT_EQ(game.getScore(), "Love-All");
}

TEST(TennisGameTest, Player1ScoresScoreIfFifteenLove) {
    Tennis game;
    game.wonPoint(PLAYER_1);
    EXPECT_EQ(game.getScore(), "Fifteen-Love");
}


TEST(TennisGameTest, Player2ScoresScoreIsLoveFifteen) {
    Tennis game;
    game.wonPoint(PLAYER_2);
    EXPECT_EQ(game.getScore(), "Love-Fifteen");
}
