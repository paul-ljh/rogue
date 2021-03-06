#include "board.hpp"

const char Board::kHorizontalBorderSegment = '-';
const char Board::kVerticalBorderSegment = '|';
const int Board::kLength = 79;
const int Board::kWidth = 25;
const int Board::kCellsCount = Board::kLength * Board::kWidth;

const string Board::kTopBottomBorder = []() {
  stringstream stream;
  stream << Board::kVerticalBorderSegment;
  for (int i = 0; i < Board::kLength; i++) {
    stream << Board::kHorizontalBorderSegment;
  }
  stream << Board::kVerticalBorderSegment;
  return stream.str();
} ();

Board::Board() {
  for (int i = 0; i < kCellsCount; ++i) {
    cells_.push_back(new Cell());
  }
};

Board::~Board() {};

void Board::PrintBoard() {
  cout << kTopBottomBorder << endl;
  PrintCells();
  cout << kTopBottomBorder << endl;
};

void Board::PrintCells() {
  for (int i = 0; i < Board::kWidth - 2; i++) {
    cout << Board::kVerticalBorderSegment;
    for (int j = 0; j < Board::kLength; j++) {
      cout << ' ';
    }
    cout << Board::kVerticalBorderSegment << endl;
  }
};
