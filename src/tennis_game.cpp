#include "tennis_game.h"
#include <iostream>

static std::string stringForScore(int score) {
    switch(score) {
        case 0:
        return "Love";
        case 1:
        return "Fifteen";
        case 2:
        return "Thirty";
        case 3:
        return "Forty";
        default:
        return "THIS IS WRONG";
    }
}

std::string Tennis::getScore() const {
    if (_player1Score == _player2Score) {
        if (_player1Score >= 3) {
            return "Deuce";
        }
        return stringForScore(_player1Score) + "-All";
    }

    return stringForScore(_player1Score) + "-" + stringForScore(_player2Score);
}

void Tennis::wonPoint(Player player) {
    if (player == PLAYER_1) {
        this->_player1Score++;
    } else {
        this->_player2Score++;
    }
}