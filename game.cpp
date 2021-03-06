#include "game.hpp"

Game::Game() {
  board = Board();
};

Game::~Game() {};

void Game::PrintGame() {
  board.PrintBoard();
};
