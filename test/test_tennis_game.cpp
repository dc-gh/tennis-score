#include <gtest/gtest.h>
#include "tennis_game.h"

void setScore(Tennis &game, int player1Score, int player2Score) {
    for(int i = 0; i < player1Score; i++) {
        game.wonPoint(PLAYER_1);
    }

    for(int i = 0; i < player2Score; i++) {
        game.wonPoint(PLAYER_2);
    }
}

// 0 - 0
TEST(TennisGameTest, InitialScoreIsLoveAll) {
    Tennis game;
    EXPECT_EQ(game.getScore(), "Love-All");
}

// 1 - 0
TEST(TennisGameTest, Player1ScoresScoreIfFifteenLove) {
    Tennis game;
    setScore(game, 1, 0);
    EXPECT_EQ(game.getScore(), "Fifteen-Love");
}

// 0 - 1
TEST(TennisGameTest, Player2ScoresScoreIsLoveFifteen) {
    Tennis game;
    setScore(game, 0, 1);
    EXPECT_EQ(game.getScore(), "Love-Fifteen");
}
 
// 1 - 1
TEST(TennisGameTest, BothPlayersScoreFifteen) {
    Tennis game;
    setScore(game, 1, 1);
    EXPECT_EQ(game.getScore(), "Fifteen-All");
}

// 2-0
TEST(TennisGameTest, Player1Scores2Player2Scores0ThirtyLove) {
    Tennis game;
    setScore(game, 2, 0);
    EXPECT_EQ(game.getScore(), "Thirty-Love");
}

TEST(TennisGameTest, Player1Scores3Player2Scores0FortyLove) {
    Tennis game;
    setScore(game, 3, 0);
    EXPECT_EQ(game.getScore(), "Forty-Love");
}

TEST(TennisGameTest, Player1Scores0Player2Scores2LoveThirty) {
    Tennis game;
    setScore(game, 0, 2);
    EXPECT_EQ(game.getScore(), "Love-Thirty");
}

TEST(TennisGameTest, Player1Scores0Player2Scores3LoveForty) {
    Tennis game;
    setScore(game, 0, 3);
    EXPECT_EQ(game.getScore(), "Love-Forty");
}

TEST(TennisGameTest, Player1Scores3Player2Scores3Deuce) {
    Tennis game;
    setScore(game, 3, 3);
    EXPECT_EQ(game.getScore(), "Deuce");
}

TEST(TennisGameTest, Player1Scores4Player2Scores3AdvantagePlayer1) {
    Tennis game;
    setScore(game, 4, 3);
    EXPECT_EQ(game.getScore(), "Advantage Player 1");
}

TEST(TennisGameTest, Player1Scores3Player2Scores4AdvantagePlayer2) {
    Tennis game;
    setScore(game, 3, 4);
    EXPECT_EQ(game.getScore(), "Advantage Player 2");
}

TEST(TennisGameTest, Player1Scores5Player2Scores3GamePlayer1) {
    Tennis game;
    setScore(game, 5, 3);
    EXPECT_EQ(game.getScore(), "Game Player 1");
}

TEST(TennisGameTest, Player1Scores3Player2Scores5GamePlayer2) {
    Tennis game;
    setScore(game, 3, 5);
    EXPECT_EQ(game.getScore(), "Game Player 2");
}

TEST(TennisGameTest, Player1Scores4Player2Scores0GamePlayer1) {
    Tennis game;
    setScore(game, 4, 0);
    EXPECT_EQ(game.getScore(), "Game Player 1");
}
