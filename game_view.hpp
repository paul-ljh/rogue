#ifndef GAME_VIEW_H
#define GAME_VIEW_H

#include <iostream>

#include "game_model.hpp"

using namespace std;

class GameView {
public:
  GameView();
  ~GameView();

  void DisplayGame();

private:
  GameModel game_model_;
};

#endif
