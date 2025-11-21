#include <iostream>
#include <string>
#include <set>
//-----------------------------------------------------------------
namespace
{
  size_t l_minLen = 'z' - 'a' + 1;
}
//-----------------------------------------------------------------
bool checkIfPangram(std::string sentence)
{
  std::set<char> chars;
  for (const auto ch : sentence)
    chars.insert(ch);
  return chars.size() == l_minLen;
}
//-----------------------------------------------------------------
int main()
{
  std::cout << "check if the sentence is pangram" << std::endl;

  std::cout << checkIfPangram("thequickbrownfoxjumpsoverthelazydog") << std::endl;
  std::cout << checkIfPangram("leetcode") << std::endl;

  return 0;
}
//-----------------------------------------------------------------
