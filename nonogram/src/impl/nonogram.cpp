/*Copyright 2020 Alex Bieliakov*/

#include <boost/log/trivial.hpp>

#include "nonogram.hpp"

Nonogram::Nonogram(std::vector<std::vector<uint8_t>> RowsFigures,
                   std::vector<std::vector<uint8_t>> ColumnsFigures) {
  BOOST_LOG_TRIVIAL(info) << "Nonogram constructor calling.";
}

uint8_t Nonogram::getRows() {
  BOOST_LOG_TRIVIAL(info) << "Nonogram getRows calling.";
  return 0;
}

uint8_t Nonogram::getColumns() {
  BOOST_LOG_TRIVIAL(info) << "Nonogram getColumns calling.";
  return 0;
}

std::vector<uint8_t> Nonogram::getRowFigures(uint8_t row) {
  BOOST_LOG_TRIVIAL(info) << "Nonogram getRowFigures calling " << row << ".";
  (void)row;
  return std::vector<uint8_t>();
}

std::vector<uint8_t> Nonogram::getColumnFigures(uint8_t column) {
  BOOST_LOG_TRIVIAL(info) << "Nonogram getColumnFigures calling " << column
                          << ".";
  (void)column;
  return std::vector<uint8_t>();
}
