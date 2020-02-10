#include "i_nonogram.hpp"

class Nonogram : public INonogram {
public:
  Nonogram(std::vector<std::vector<uint8_t>> RowsFigures,
           std::vector<std::vector<uint8_t>> ColumnsFigures);

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
