/*Copyright 2020 Alex Bieliakov*/

#include <iostream>

#include <boost/log/trivial.hpp>

#include "nonogram_factory.hpp"

int main() {
  BOOST_LOG_TRIVIAL(info) << "Nonogram_cli started.";
  std::vector<std::vector<uint8_t>> r;
  std::vector<std::vector<uint8_t>> c;
  auto nonogram = MakeNonogram(r, c);
  std::cout << "Hello, world!" << std::endl;
  return 0;
}
