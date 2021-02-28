#ifndef GAME_MODEL_H
#define GAME_MODEL_H

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class GameModel {
public:
  GameModel();
  ~GameModel();

  void PrintBoard();

private:
  static const string kHorizontalBorderSegment;
  static const char kVerticalBorderSegment;
  static const int kLength;
  static const int kWidth;
  static const string kTopBottomBorder;

  void PrintCells();
};

#endif
