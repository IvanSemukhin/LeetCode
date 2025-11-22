#ifndef COMMON_H
#define COMMONH

#include <iostream>
#include <string>
#include <vector>

template<typename T>
void printContainer(const T & container)
{
  for (auto it = container.begin(); it != container.end(); ++it)
    std::cout << *it << " ";
  std::cout << std::endl;
}

#endif //COMMON_H
