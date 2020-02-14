/*Copyright 2020 Alex Bieliakov*/

#include <boost/log/trivial.hpp>

#include "nonogram.hpp"

Nonogram::Nonogram(const std::vector<std::vector<uint8_t>> &RowsFigures,
                   const std::vector<std::vector<uint8_t>> &ColumnsFigures)
    : rows_(RowsFigures.size()), columns_(ColumnsFigures.size()),
      rows_figures_(RowsFigures), column_figures_(ColumnsFigures) {
  BOOST_LOG_TRIVIAL(info) << "Nonogram constructor calling.";
}

uint8_t Nonogram::getRows() {
  BOOST_LOG_TRIVIAL(info) << "Nonogram getRows calling.";
  return rows_;
}

uint8_t Nonogram::getColumns() {
  BOOST_LOG_TRIVIAL(info) << "Nonogram getColumns calling.";
  return columns_;
}

std::vector<uint8_t> Nonogram::getRowFigures(uint8_t row) {
  BOOST_LOG_TRIVIAL(info) << "Nonogram getRowFigures calling " << row << ".";
  return rows_figures_[row];
}

std::vector<uint8_t> Nonogram::getColumnFigures(uint8_t column) {
  BOOST_LOG_TRIVIAL(info) << "Nonogram getColumnFigures calling " << column
                          << ".";
  return column_figures_[column];
}
