/* Copyright 2020 Alex Bieliakov */

#include <boost/log/trivial.hpp>

#include "nonogram_factory.hpp"

#include "nonogram.hpp"

std::shared_ptr<INonogram>
MakeNonogram(std::vector<std::vector<uint8_t>> RowsFigures,
             std::vector<std::vector<uint8_t>> ColumnsFigures) {
  BOOST_LOG_TRIVIAL(info) << "Creating nonogram.";
  return std::make_shared<Nonogram>(RowsFigures, ColumnsFigures);
}
