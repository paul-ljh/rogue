#ifndef BOARD_H
#define BOARD_H

#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#include "cell.hpp"

using namespace std;

class Board {
public:
  Board();
  ~Board();

  void PrintBoard();

private:
  static const char kHorizontalBorderSegment;
  static const char kVerticalBorderSegment;
  static const int kLength;
  static const int kWidth;
  static const int kCellsCount;
  static const string kTopBottomBorder;

  vector<Cell*> cells_;
  void PrintCells();
};

#endif
