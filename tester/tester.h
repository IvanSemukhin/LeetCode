#include <iostream>
#include <vector>
#include <string>
#include <sstream>
//------------------------------------------------------------------------------
template<typename T>
std::string toString(const T & val)
{
  std::ostringstream oss;
  oss << val;
  return oss.str();
}
//------------------------------------------------------------------------------
// Specializations
//------------------------------------------------------------------------------
template<typename T>
std::string toString(const std::vector<T> & vec)
{
  std::ostringstream oss;
  oss << "[";
  for (size_t i = 0; i < vec.size(); ++i)
  {
    if (i > 0) oss << ", ";
    oss << toString(vec[i]);
  }
  oss << "]";
  return oss.str();
}
//------------------------------------------------------------------------------
inline std::string toString(const std::string & str) { return "\"" + str + "\""; }
//------------------------------------------------------------------------------
inline std::string toString(bool b) { return b ? "true" : "false"; }
//------------------------------------------------------------------------------
// Tester
//------------------------------------------------------------------------------
class Tester
{
public:
  Tester(bool showPassed = false) :
    _countPassed(0), _countFailed(0), _showPassed(showPassed) {}

  template<typename T>
  void assertEqual(const T & actual, const T & expected, const std::string & testName = "default test name")
  {
    if (actual == expected)
    {
      ++_countPassed;
      if (_showPassed)
        std::cout << "\033[32mV\033[0m " << testName << std::endl;
    } else
    {
      ++_countFailed;
      std::cout << "\033[31mX\033[0m " << testName << std::endl;
      std::cout << "\texpected: " << toString(expected) << std::endl;
      std::cout << "\tactual:   " << toString(actual) << std::endl;
    }
  }

  bool allPassed() const { return _countFailed == 0; }

  void printSummary() const
  {
    std::cout << "\n========== TESTER RESULTS ==========\n";
    std::cout << "\033[32mPassed: " << _countPassed << "\033[0m\n";
    if (_countFailed > 0)
      std::cout << "\033[31mFailed: " << _countFailed << "\033[0m\n";
    else
      std::cout << "Failed: " << _countFailed << "\n";
    std::cout << "All: " << _countPassed + _countFailed << "\n";
    std::cout << "====================================\n";
  }

private:
  size_t _countPassed;
  size_t _countFailed;
  bool   _showPassed;
};
//------------------------------------------------------------------------------
