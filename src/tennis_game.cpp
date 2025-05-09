#include "tennis_game.h"
#include <iostream>

std::string Tennis::getScore() const {
    if (_player1Score > _player2Score) {
        return "Fifteen-Love";
    }

    return "Love-All";
}

void Tennis::wonPoint(Player player) {
    if (player == PLAYER_1) {
        this->_player1Score++;
    } else {
        this->_player2Score++;
    }
}