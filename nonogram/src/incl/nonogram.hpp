/*Copyright 2020 Alex Bieliakov*/

#ifndef NONOGRAM_SRC_INCL_NONOGRAM_HPP_
#define NONOGRAM_SRC_INCL_NONOGRAM_HPP_

#include <vector>

#include "i_nonogram.hpp"

class Nonogram : public INonogram {
public:
  Nonogram(const std::vector<std::vector<uint8_t>> &RowsFigures,
           const std::vector<std::vector<uint8_t>> &ColumnsFigures);

  uint8_t getRows() override;

  uint8_t getColumns() override;

  std::vector<uint8_t> getRowFigures(uint8_t row) override;

  std::vector<uint8_t> getColumnFigures(uint8_t column) override;

private:
  uint8_t rows_;

  uint8_t columns_;

  std::vector<std::vector<uint8_t>> rows_figures_;

  std::vector<std::vector<uint8_t>> column_figures_;
};

#endif //  NONOGRAM_SRC_INCL_NONOGRAM_HPP_
