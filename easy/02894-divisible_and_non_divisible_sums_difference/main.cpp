#include <iostream>

int differenceOfSums(int n, int m)
{
  if (m > n)
    return (n * (n + 1)) / 2;

  if (m == 1)
    return -(n * (n + 1)) / 2;

  int divSum = 0;
  int nonDivSum = 0;
  for (int i = 1; i <=n; ++i)
    if (i % m)
      nonDivSum += i;
    else
      divSum += i;

  return nonDivSum - divSum;
}

int main()
{
  std::cout << "divisible and non divisible sums difference" << std::endl;

  std::cout << differenceOfSums(10, 3) << std::endl; // 19
  std::cout << differenceOfSums(5, 6) << std::endl; // 15
  std::cout << differenceOfSums(5, 1) << std::endl; // -15

  return 0;
}
