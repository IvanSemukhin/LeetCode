#include <iostream>
#include <vector>

bool canAliceWin(const std::vector<int> & nums)
{
  int oneDigitSum = 0;
  int twoDigitSum = 0;

  for (const auto & num : nums)
    if (num / 10)
      twoDigitSum += num;
    else
      oneDigitSum += num;

  return twoDigitSum != oneDigitSum;
}

int main()
{
  std::cout << "find if digit game can be won" << std::endl;

  std::cout << canAliceWin({1,2,3,4,10}) << std::endl; // false
  std::cout << canAliceWin({1,2,3,4,5,14}) << std::endl; // true
  std::cout << canAliceWin({5,5,5,25}) << std::endl; // true

  return 0;
}
