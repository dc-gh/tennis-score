#include "tennis_game.h"
#include <iostream>

std::string Tennis::getScore() const {
    if (_player1Score == _player2Score) {
        switch(_player1Score) {
            case 0:
                return "Love-All";
            case 1:
                return "Fifteen-All";
        }
    }

    if (_player1Score > _player2Score) {
        return "Fifteen-Love";
    } else if( _player1Score < _player2Score) {
        return "Love-Fifteen";
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