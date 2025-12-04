#include <iostream>
#include <array>

bool judgeCircle(const std::string & moves)
{
  std::array<int, 2> endPoint{0, 0};

  for (const auto & move : moves)
    if (move == 'U')
      ++endPoint[1];
    else if (move == 'D')
      --endPoint[1];
    else if (move == 'L')
      ++endPoint[0];
    else
      --endPoint[0];

  return endPoint == std::array<int, 2>{0, 0};
}

int main()
{
  std::cout << "robot return to origin" << std::endl;

  std::cout << judgeCircle("UD") << std::endl; // true
  std::cout << judgeCircle("LL") << std::endl; // false

  return 0;
}
