#include "../../common/common.h"

std::vector<int> sortedSquares(const std::vector<int> & nums)
{
  std::vector<int> result;
  result.reserve(nums.size());
  int left = 0;
  int right = nums.size() - 1;

  while (left <= right)
  {
    int leftSquare = nums[left] * nums[left];
    int rightSquare = nums[right] * nums[right];

    if (leftSquare > rightSquare)
    {
      result.push_back(leftSquare);
      left++;
    } else 
    {
      result.push_back(rightSquare);
      right--;
    }
  }

  std::reverse(result.begin(), result.end());
  return result;
}

int main()
{
  std::cout << sortedSquares({-4,-1,0,3,10}) << std::endl; // [0,1,9,16,100]
  std::cout << sortedSquares({-7,-3,2,3,11}) << std::endl; // [4,9,9,49,121]
  std::cout << sortedSquares({-1}) << std::endl; // [1]
  std::cout << sortedSquares({1}) << std::endl; // [1]
  std::cout << sortedSquares({0,2}) << std::endl; // [0,4]
}