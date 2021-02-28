#include "game_controller.hpp"

GameController::GameController() {
  game_view_ = GameView();
};

GameController::~GameController() {};

void GameController::Welcome() {
  cout << "Welcome to Rogue 2021 Corona Version!\n";
};

void GameController::PickCharacter() {
  cout << "Now pick your bloody character!" << endl;
  cout << "s, d, v, g, t" << endl;
  game_view_.DisplayGame();
};
