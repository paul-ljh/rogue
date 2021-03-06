#ifndef GAME_VIEW_H
#define GAME_VIEW_H

#include <iostream>

#include "game.hpp"

using namespace std;

class GameView {
public:
  GameView();
  ~GameView();

  void DisplayGame();

private:
  Game game;
};

#endif
