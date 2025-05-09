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
    if (_player1Score <= 3 && _player2Score <= 3) {
        if (_player1Score == _player2Score) {
            // TODO: Delete me.
            if (_player1Score == 3) {
                return "Deuce";
            } else {
                return stringForScore(_player1Score) + "-All";
            }
        }

        return stringForScore(_player1Score) + "-" + stringForScore(_player2Score);
    }

    const int diff = _player1Score - _player2Score;
    switch (diff) {
        case -2:
        case -3:
        case -4:
            return "Game Player 2";
        case -1:
            return "Advantage Player 2";
        case 0:
            return "Deuce";
        case 1:
            return "Advantage Player 1";
        case 2:
        case 3:
        case 4:
            return "Game Player 1";
    }

    return "ALL IS BAD";
}

void Tennis::wonPoint(Player player) {
    if (player == PLAYER_1) {
        this->_player1Score++;
    } else {
        this->_player2Score++;
    }
}