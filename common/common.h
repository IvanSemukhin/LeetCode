#ifndef COMMON_H
#define COMMON_H
//------------------------------------------------------------------------------------
#include <iostream>
#include <string>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <vector>
#include <list>
#include <deque>
//------------------------------------------------------------------------------------
namespace
{
template<typename Container>
std::ostream & l_print(std::ostream & os, const Container & container)
{
  os << "[";
  auto it = container.begin();
  if (it != container.end())
  {
    os << *it;
    ++it;
  }
  for (; it != container.end(); ++it)
  {
    os << ", " << *it;
  }
  os << "]";
  return os;
}
}

template<typename T1, typename T2>
std::ostream & operator<<(std::ostream & os, const std::pair<T1, T2> & pair)
{
  os << "(" << pair.first << ": " << pair.second << ")";
  return os;
}

template<typename T>
std::ostream & operator<<(std::ostream & os, const std::vector<T> & container)
{
  return l_print(os, container);
}

template<typename T>
std::ostream & operator<<(std::ostream & os, const std::list<T> & container)
{
  return l_print(os, container);
}

template<typename T>
std::ostream & operator<<(std::ostream & os, const std::deque<T> & container)
{
  return l_print(os, container);
}

template<typename T>
std::ostream & operator<<(std::ostream & os, const std::set<T> & container)
{
  return l_print(os, container);
}

template<typename T>
std::ostream & operator<<(std::ostream & os, const std::unordered_set<T> & container)
{
  return l_print(os, container);
}

template<typename Key, typename Value>
std::ostream & operator<<(std::ostream & os, const std::map<Key, Value> & container)
{
  return l_print(os, container);
}

template<typename Key, typename Value>
std::ostream & operator<<(std::ostream & os, const std::unordered_map<Key, Value> & container)
{
  return l_print(os, container);
}

#endif // COMMON_H
