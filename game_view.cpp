#include "game_view.hpp"

GameView::GameView() {
  game_model_ = GameModel();
};

GameView::~GameView() {};

void GameView::DisplayGame() {
  game_model_.PrintBoard();
};
