/*Copyright 2020 Alex Bieliakov*/

#include "nonogram.hpp"

#include "gtest/gtest.h"

TEST(NonogramTest, DummyTest) {
  std::vector<std::vector<uint8_t>> r, c;
  std::vector<uint8_t> r_1{1, 2, 3, 4}, c_1{5, 6, 7, 8};
  r.push_back(r_1);
  c.push_back(c_1);
  auto nonogram = Nonogram(r, c);
  EXPECT_EQ(nonogram.getRows(), 1);
}
