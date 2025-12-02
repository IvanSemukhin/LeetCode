#include <iostream>
//----------------------------------------------------------------------------------------------------------------------
int subtractProductAndSum(int n)
{
  int sum = 0;
  int prod = 1;

  while (n)
  {
    sum += n % 10;
    prod *= n % 10;
    n /= 10;
  }

  return prod - sum;
}
//----------------------------------------------------------------------------------------------------------------------
int main()
{
  std::cout << "subtract the product and sum of digits of an integer" << std::endl;

  std::cout << subtractProductAndSum(234) << std::endl; // 15
  std::cout << subtractProductAndSum(4421) << std::endl; // 21

  return 0;
}
//----------------------------------------------------------------------------------------------------------------------
