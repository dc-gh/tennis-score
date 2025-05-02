#include <gtest/gtest.h>
#include "tennis_game.h"

TEST(TennisGameTest, InitialScoreIsLoveAll) {
    Tennis game;
    EXPECT_EQ(game.getScore(), "Love-All");
}
