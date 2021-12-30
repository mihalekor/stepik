/*
 * https://stepik.org/lesson/53371/step/13?unit=31463
 *
 * По аналогии с функцией printf с предыдущего степа напишите функцию print_values с переменным числом аргументов,
которая для каждого аргумента выводит его тип и значение в поток std::ostream, который ей передан в качестве первого
аргумента. Функция должна работать с произвольным числом аргументов. Указание: для вывода имени типа нужно использовать
std::type_info::name.
*/

#ifndef __2_1_PRINT_VALUES_H
#define __2_1_PRINT_VALUES_H

#include <ostream>
#include <typeinfo>

void print_values(std::ostream &os){};

template <typename T>
void print_values(std::ostream &os, T value)
{
  os << typeid(T).name() << ": " << value << std::endl;
}

// принимает произвольное число аргументов
template <typename T, typename... Args>
void print_values(std::ostream &os, T value, Args... args)
{
  os << typeid(value).name() << ": " << value << std::endl;
  print_values(os, args...);
}

#endif // __2_1_PRINT_VALUES_H
