#include <cstdint>
#include <vector>

class INonogram {
public:
  /**
   * @brief The method returns count of columns of the nonogram.
   *
   * @return Number of rows of the nonogram.
   */
  virtual uint8_t getRows() = 0;

  /**
   * @brief The method returns count of columns of the nonogram.
   *
   * @return Number of columns of the nonogram.
   */
  virtual uint8_t getColumns() = 0;

  /**
   * @brief The method returns vector of figures of the row of the nonogram.
   *
   * @param row Number of the row of the nonogram.
   *
   * @return Vector of the figures of the row of the nonogram.
   */
  virtual std::vector<uint8_t> getRowFigures(uint8_t row) = 0;

  /**
   * @brief The method returns vector of figures of the row of the nonogram.
   *
   * @param row Number of the row of the nonogram.
   *
   * @return Vector of the figures of the row of the nonogram.
   */
  virtual std::vector<uint8_t> getColumnFigures(uint8_t column) = 0;
};
