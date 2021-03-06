#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Game {
public:
  Game();
  ~Game();

  void PrintBoard();

private:
  static const char kHorizontalBorderSegment;
  static const char kVerticalBorderSegment;
  static const int kLength;
  static const int kWidth;
  static const string kTopBottomBorder;

  void PrintCells();
};

#endif
