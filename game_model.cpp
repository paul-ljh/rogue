#include "game_model.hpp"

const string GameModel::kHorizontalBorderSegment = "- ";
const char GameModel::kVerticalBorderSegment = '|';
const int GameModel::kLength = 79;
const int GameModel::kWidth = 25;

const string GameModel::kTopBottomBorder = []() {
  stringstream stream;
  for (int i = 0; i < GameModel::kLength; i++) {
    stream << GameModel::kHorizontalBorderSegment;
  }
  return stream.str();
} ();

GameModel::GameModel() {};

GameModel::~GameModel() {};

void GameModel::PrintBoard() {
  cout << kTopBottomBorder << endl;
  PrintCells();
  cout << kTopBottomBorder << endl;
};

void GameModel::PrintCells() {
  cout << "cells" << endl;
};
