/*Copyright 2020 Alex Bieliakov*/

#include "nonogram.hpp"

#include <sstream>
#include <stdexcept>

#include <boost/log/trivial.hpp>

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
  BOOST_LOG_TRIVIAL(info) << "Nonogram getRowFigures calling "
                          << static_cast<unsigned int>(row) << ".";
  if (row >= rows_) {
    BOOST_LOG_TRIVIAL(error) << "Error in getRowFigures. Value of row ("
                             << static_cast<unsigned int>(row) << ")"
                             << " is biger or equal than value of rows_ ("
                             << static_cast<unsigned int>(rows_) << ").";
    std::stringstream error_stream;
    error_stream << "Error in getRowFigures. Value of row ("
                 << static_cast<unsigned int>(row) << ")"
                 << " is biger or equal than value of rows_ ("
                 << static_cast<unsigned int>(rows_) << ").";
    throw std::runtime_error(error_stream.str());
  } else {
    return rows_figures_[row];
  }
}

std::vector<uint8_t> Nonogram::getColumnFigures(uint8_t column) {
  BOOST_LOG_TRIVIAL(info) << "Nonogram getColumnFigures calling "
                          << static_cast<unsigned int>(column) << ".";
  if (column >= columns_) {
    BOOST_LOG_TRIVIAL(error) << "Error in getColumnFigures. Value of row ("
                             << static_cast<unsigned int>(column) << ")"
                             << " is biger or equal than value of rows_ ("
                             << static_cast<unsigned int>(columns_) << ").";
    std::stringstream error_stream;
    error_stream << "Error in getColumnFigures. Value of row ("
                 << static_cast<unsigned int>(column) << ")"
                 << " is biger or equal than value of rows_ ("
                 << static_cast<unsigned int>(columns_) << ").";
    throw std::runtime_error(error_stream.str());
  } else {
    return column_figures_[column];
  }
}
