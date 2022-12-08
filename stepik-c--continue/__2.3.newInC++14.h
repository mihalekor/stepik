#ifndef __2_3_NEWINC14_H
#define __2_3_NEWINC14_H
/*
Напишите шаблонную функцию to_pair, которая принимает произвольный std::tuple и два индекса внутри и возвращает
std::pair, содержащий элементы переданного std::tuple с соответствующими индексами.

Пример:

auto t = std::make_tuple(0, 3.5, "Hello");
std::pair<double, char const *> p = to_pair<1,2>(t);
// p содержит 3.5 и "Hello"
*/

#include <tuple>

// принимает std::tuple произвольного размера
template <typename... Argss>
void to_pair(std::tuple<Argss...> myTuple, const int p1, const int p2)
{
  std::get<p1>(myTuple);
  std::get<p2>(myTuple);
}

#endif // __2_3_NEWINC14_H
