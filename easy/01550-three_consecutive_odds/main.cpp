#include <iostream>
#include <vector>
//----------------------------------------------------------------------------------------------------------------------
bool threeConsecutiveOdds(const std::vector<int> & arr)
{
  int countOdd = 0;

  for (const auto & n : arr)
  {
    if (n % 2)
    {
      ++countOdd;
      if(countOdd == 3) return true;
    } else
    {
      if(countOdd == 3) return true;
      countOdd = 0;
    }
  }

  return countOdd == 3;
}
//----------------------------------------------------------------------------------------------------------------------
int main()
{
  std::cout << threeConsecutiveOdds({2, 6, 4, 1}) << std::endl; // false
  std::cout << threeConsecutiveOdds({1, 2, 34, 3, 4, 5, 7, 23, 12}) << std::endl; // true
  std::cout << threeConsecutiveOdds({1, 2, 34, 3, 4, 5, 7, 23, 13}) << std::endl; // true
  std::cout << threeConsecutiveOdds({1, 1, 1}) << std::endl; // true
  std::cout << threeConsecutiveOdds({424, 915, 193, 591, 923}) << std::endl; // true

  return 0;
}
//----------------------------------------------------------------------------------------------------------------------
