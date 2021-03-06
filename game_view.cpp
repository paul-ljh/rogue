#include "game_view.hpp"

GameView::GameView() {
  game = Game();
};

GameView::~GameView() {};

void GameView::DisplayGame() {
  game.PrintGame();
};
