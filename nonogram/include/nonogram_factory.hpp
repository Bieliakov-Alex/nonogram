/*Copyright 2020 Alex Bieliakov*/

#ifndef NONOGRAM_INCLUDE_NONOGRAM_FACTORY_HPP_
#define NONOGRAM_INCLUDE_NONOGRAM_FACTORY_HPP_

#include <memory>

#include "i_nonogram.hpp"

std::shared_ptr<INonogram>
MakeNonogram(std::vector<std::vector<uint8_t>> RowsFigures,
             std::vector<std::vector<uint8_t>> ColumnsFigures);

#endif //  NONOGRAM_INCLUDE_NONOGRAM_FACTORY_HPP_
