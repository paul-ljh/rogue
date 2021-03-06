#include "game.hpp"

const char Game::kHorizontalBorderSegment = '-';
const char Game::kVerticalBorderSegment = '|';
const int Game::kLength = 79;
const int Game::kWidth = 25;

const string Game::kTopBottomBorder = []() {
  stringstream stream;
  stream << Game::kVerticalBorderSegment;
  for (int i = 0; i < Game::kLength; i++) {
    stream << Game::kHorizontalBorderSegment;
  }
  stream << Game::kVerticalBorderSegment;
  return stream.str();
} ();

Game::Game() {};

Game::~Game() {};

void Game::PrintBoard() {
  cout << kTopBottomBorder << endl;
  PrintCells();
  cout << kTopBottomBorder << endl;
};

void Game::PrintCells() {
  for (int i = 0; i < Game::kWidth - 2; i++) {
    cout << Game::kVerticalBorderSegment;
    for (int j = 0; j < Game::kLength; j++) {
      cout << ' ';
    }
    cout << Game::kVerticalBorderSegment << endl;
  }
};
