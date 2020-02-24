/*Copyright 2020 Alex Bieliakov*/

#ifndef NONOGRAM_NONOGRAM_TEST_MOCKS_INCLUDE_MOCK_NONOGRAM_HPP_
#define NONOGRAM_NONOGRAM_TEST_MOCKS_INCLUDE_MOCK_NONOGRAM_HPP_

#include "gmock/gmock.h"

#include "i_nonogram.hpp"

class MockNonogram : public INonogram {
public:
  MOCK_METHODO(getRows, uint8_t());
  MOCK_METHOD0(getColumns, uint8_t());
  MOCK_METHOD1(getRowFigures, std::vector<uint8_t>(uint8_t));
  MOCK_METHOD1(getColumnFigures, std::vector<uint8_t>(uint8_t));
};

#endif // NONOGRAM_NONOGRAM_TEST_MOCKS_INCLUDE_MOCK_NONOGRAM_HPP_
