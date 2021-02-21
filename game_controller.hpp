#ifndef GAME_CONTROLLER_H
#define GAME_CONTROLLER_H

#include <iostream>

#include "game_view.hpp"

using namespace std;

class GameController {
public:
  GameController();
  ~GameController();

  void Welcome();
  void PickCharacter();

private:
  GameView game_view_;
};

#endif
