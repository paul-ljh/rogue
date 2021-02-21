#include <iostream>

#include "game_controller.hpp"

using namespace std;

int main() {
  GameController game_controller;

  game_controller.Welcome();
  game_controller.PickCharacter();
  while (true) {
  };
  return 0;
}
