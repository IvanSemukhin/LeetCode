#include <iostream>
#include "../../tester/tester.h"
//------------------------------------------------------------------------------
std::vector<int> twoSum(const std::vector<int> & nums, int target);
//------------------------------------------------------------------------------
int main()
{
  Tester tester;

  tester.assertEqual(twoSum({2,7,11,15}, 9), {0,1}, "TEST 1");
  tester.assertEqual(twoSum({2,7,11,15}, 9), {},    "TEST 2");

  if (tester.allPassed() == false)
  {
    tester.printSummary();
    return 1;
  }

  return 0;
}
//------------------------------------------------------------------------------
std::vector<int> twoSum(const std::vector<int> & nums, int target)
{
  std::vector<int> res;
  return res;
}
//------------------------------------------------------------------------------
