#include <iostream>
//----------------------------------------------------------------------------------------------------------------------
int differenceOfSums(int n, int m)
{
  return n * (n + 1) / 2 - m * (n/m) * (n/m + 1);
}
//----------------------------------------------------------------------------------------------------------------------
int main()
{
  std::cout << "divisible and non divisible sums difference" << std::endl;

  std::cout << differenceOfSums(10, 3) << std::endl; // 19
  std::cout << differenceOfSums(5, 6) << std::endl; // 15
  std::cout << differenceOfSums(5, 1) << std::endl; // -15

  return 0;
}
//----------------------------------------------------------------------------------------------------------------------
