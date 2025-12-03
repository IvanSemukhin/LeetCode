#include <iostream>
#include <vector>

//----------------------------------------------------------------------------------------------------------------------
int calPoints(const std::vector<std::string> & operations)
{
  std::vector<int> points;
  points.reserve(operations.size());

  for (const auto & op : operations)
  {
    try
    {
      int point = std::stoi(op);
      points.push_back(point);
    } catch (std::invalid_argument const & ex)
    {
      if (op == "C")
      {
        points.pop_back();
      }
      if (op == "D")
      {
        points.push_back(2 * points.back());
      }
      if (op == "+")
      {
        int back = points.back();
        points.pop_back();
        int sum = back + points.back();
        points.push_back(back);
        points.push_back(sum);
      }
    }
  }
  int res = 0;
  for (const auto & point : points)
    res += point;
  return res;
}
//----------------------------------------------------------------------------------------------------------------------
int main()
{
  std::cout << "baseball game" << std::endl;
  std::cout <<calPoints({"5","2","C","D","+"}) << std::endl; // 30
  std::cout <<calPoints({"5","-2","4","C","D","9","+","+"}) << std::endl; // 27
  std::cout <<calPoints({"1","C"}) << std::endl; // 0

  return 0;
}
//----------------------------------------------------------------------------------------------------------------------
