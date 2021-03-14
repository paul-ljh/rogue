#include "board.hpp"

const char Board::kHorizontalBorderSegment = '-';
const char Board::kVerticalBorderSegment = '|';
const int Board::kLength = 79;
const int Board::kWidth = 25;
const int Board::kCellsCount = kLength * (kWidth - 2);

const string Board::kTopBottomBorder = []() {
  stringstream stream;
  stream << kVerticalBorderSegment;
  for (int i = 0; i < kLength; i++) {
    stream << kHorizontalBorderSegment;
  }
  stream << kVerticalBorderSegment;
  return stream.str();
} ();

Board::Board() {
  // TODO: no need to initialize every sinle tile to be a Cell
  for (int i = 0; i < kWidth - 2; ++i) {
    vector<Cell*> temp_vector;
    for (int j = 0; j < kLength; ++j) {
      temp_vector.push_back(new Cell());
    }
    cells_.push_back(temp_vector);
  }
};

Board::~Board() {};

void Board::PrintBoard() {
  cout << kTopBottomBorder << endl;
  PrintCells();
  cout << kTopBottomBorder << endl;
};

void Board::PrintCells() {
  for (int i = 0; i < kWidth - 2; i++) {
    cout << kVerticalBorderSegment;
    for (int j = 0; j < kLength; j++) {
      cells_[i][j]->PrintCell();
    }
    cout << kVerticalBorderSegment << endl;
  }
};
