#include <iostream>

int theMaximumAchievableX(int num, int t)
{
  return num + 2 * t;
}

int main()
{
  std::cout << "find the maximum achievable number" << std::endl;

  std::cout << theMaximumAchievableX(4, 1) << std::endl; // 6
  std::cout << theMaximumAchievableX(3, 2) << std::endl; // 7

  return 0;
}
