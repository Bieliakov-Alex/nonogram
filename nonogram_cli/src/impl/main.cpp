/*Copyright 2020 Alex Bieliakov*/

#include <iostream>
#include <utility>

#include <boost/log/trivial.hpp>

#include "nonogram_factory.hpp"

int main() {
  BOOST_LOG_TRIVIAL(info) << "Nonogram_cli started.";

  std::vector<std::vector<uint8_t>> empty_rows, empty_columns;
  auto empty_nonogram = MakeNonogram(empty_rows, empty_columns);

  auto row_size = empty_nonogram->getRows();

  if (row_size == 0) {
    std::cout << "Good" << '\n';
  } else {
    std::cout << "Bad" << '\n';
  }

  std::vector<std::vector<uint8_t>> r;
  std::vector<uint8_t> r_1{1, 2, 3, 4};
  r.push_back(r_1);
  std::vector<std::vector<uint8_t>> c;
  std::vector<uint8_t> c_1{5, 6, 7, 8};
  c.push_back(c_1);
  auto nonogram = MakeNonogram(r, c);
  r_1.push_back(101);
  c_1.push_back(102);

  for (auto i : r_1) {
    std::cout << static_cast<int>(i) << " ";
  }
  std::cout << std::endl;

  for (auto i : nonogram->getRowFigures(0)) {
    std::cout << static_cast<int>(i) << " ";
  }
  std::cout << std::endl;

  for (auto i : c_1) {
    std::cout << static_cast<int>(i) << " ";
  }
  std::cout << std::endl;

  for (auto i : nonogram->getRowFigures(0)) {
    std::cout << static_cast<int>(i) << " ";
  }
  std::cout << std::endl;

  std::cout << "Hello, world!" << std::endl;

  return 0;
}
