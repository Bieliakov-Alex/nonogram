/*Copyright 2020 Alex Bieliakov*/

#include "nonogram.hpp"

#include "gtest/gtest.h"

TEST(NonogramTest, GetRowsTest) {
  std::vector<std::vector<uint8_t>> r, empty_columns;
  std::vector<uint8_t> r_1{1, 2, 3, 4};
  r.push_back(r_1);
  auto nonogram = Nonogram(r, empty_columns);
  EXPECT_EQ(nonogram.getRows(), 1);

  // Empty rows
  std::vector<std::vector<uint8_t>> empty_rows;
  auto empty_nonogram = Nonogram(empty_rows, empty_columns);
  EXPECT_EQ(empty_nonogram.getRows(), 0);

  // 10 rows
  std::vector<std::vector<uint8_t>> rows_10;
  for (uint8_t i = 0; i < 10; ++i) {
    rows_10.push_back(std::vector<uint8_t>());
  }
  auto nonogram_10_rows = Nonogram(rows_10, empty_columns);
  EXPECT_EQ(nonogram_10_rows.getRows(), 10);
}

TEST(NonogramTest, GetColumnsTest) {
  std::vector<std::vector<uint8_t>> empty_rows, empty_columns, columns_1,
      columns_10;
  columns_1.push_back(std::vector<uint8_t>());
  for (uint8_t i = 0; i < 10; ++i) {
    columns_10.push_back(std::vector<uint8_t>());
  }

  auto empty_nonogram = Nonogram(empty_rows, empty_columns);
  auto nonogram_1 = Nonogram(empty_rows, columns_1);
  auto nonogram_10 = Nonogram(empty_rows, columns_10);

  EXPECT_EQ(empty_nonogram.getColumns(), 0);
  EXPECT_EQ(nonogram_1.getColumns(), 1);
  EXPECT_EQ(nonogram_10.getColumns(), 10);
}

TEST(NonogramTest, GetRowFiguresTest) {
  std::vector<std::vector<uint8_t>> empty_columns, rows;

  // Test empty rows.
  auto empty_nonogram = Nonogram(rows, empty_columns);
  EXPECT_THROW(empty_nonogram.getRowFigures(0), std::runtime_error);

  // Test one entry rows.
  rows.push_back(std::vector<uint8_t>({1, 2, 3, 4}));
  auto one_entry_nonogram = Nonogram(rows, empty_columns);
  EXPECT_EQ(one_entry_nonogram.getRowFigures(0),
            std::vector<uint8_t>({1, 2, 3, 4}));

  // Test many entry rows.
  rows.push_back(std::vector<uint8_t>({5, 6, 7, 8}));
  auto many_entry_nonogram = Nonogram(rows, empty_columns);
  EXPECT_NE(many_entry_nonogram.getRowFigures(1),
            std::vector<uint8_t>({1, 2, 3, 4}));
  EXPECT_EQ(many_entry_nonogram.getRowFigures(1),
            std::vector<uint8_t>({5, 6, 7, 8}));
}

TEST(NonogramTest, GetColumnFiguresTest) {
  std::vector<std::vector<uint8_t>> columns, empty_rows;

  // Test empty columnss.
  auto empty_nonogram = Nonogram(empty_rows, columns);
  EXPECT_THROW(empty_nonogram.getColumnFigures(0), std::runtime_error);

  // Test one entry rows.
  columns.push_back(std::vector<uint8_t>({1, 2, 3, 4}));
  auto one_entry_nonogram = Nonogram(empty_rows, columns);
  EXPECT_EQ(one_entry_nonogram.getColumnFigures(0),
            std::vector<uint8_t>({1, 2, 3, 4}));

  // Test many entry rows.
  columns.push_back(std::vector<uint8_t>({5, 6, 7, 8}));
  auto many_entry_nonogram = Nonogram(empty_rows, columns);
  EXPECT_NE(many_entry_nonogram.getColumnFigures(1),
            std::vector<uint8_t>({1, 2, 3, 4}));
  EXPECT_EQ(many_entry_nonogram.getColumnFigures(1),
            std::vector<uint8_t>({5, 6, 7, 8}));
}
