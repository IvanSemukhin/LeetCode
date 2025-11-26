#include <iostream>
//----------------------------------------------------------------------------------------------------------------------
int firstUniqChar(const std::string & str)
{
  static size_t engLen = 'z' - 'a' + 1;
  size_t charsCount[engLen] = {};

  for (const auto ch : str)
    ++charsCount[ch - 'a'];

  for (int i = 0; i < str.length(); ++i)
    if (charsCount[str[i] - 'a'] == 1)
      return i;

  return -1;
}
//----------------------------------------------------------------------------------------------------------------------
int main()
{
  std::cout << "first unique character in a string" << std::endl;

  std::cout << firstUniqChar("leetcode") << std::endl; // 0
  std::cout << firstUniqChar("loveleetcode") << std::endl; // 2
  std::cout << firstUniqChar("aabb") << std::endl; // -1

  return 0;
}
//----------------------------------------------------------------------------------------------------------------------
