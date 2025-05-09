#pragma once

#include <string>

enum Player {
    PLAYER_1,
    PLAYER_2
};

class Tennis {
public:
    Tennis() : _player1Score(0), _player2Score(0) {}
    void wonPoint(Player player);
    std::string getScore() const;
private:
    int _player1Score;
    int _player2Score;
};
