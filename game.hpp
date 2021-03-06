#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <sstream>
#include <string>

#include "board.hpp"

using namespace std;

class Game {
public:
  Game();
  ~Game();

  void PrintGame();
private:
  Board board;
};

#endif
