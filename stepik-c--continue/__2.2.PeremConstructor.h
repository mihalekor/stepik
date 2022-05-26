/*
Дополните класс Array перемещающим конструктором и перемещающим оператором присваивания.
*/
#ifndef __2_2_1_PEREMCONCTRUCTOR
#define __2_2_1_PEREMCONCTRUCTOR
#include <cstddef>
#include <iostream>
#include <utility>

using namespace std;

template <class T>
struct Array
{
  // все объявленные ниже методы уже реализованы
  explicit Array(size_t size = 0)
  {
    cout << "Array(size_t size = 0)" << endl;
    data_ = new T[size];
  };
  Array(Array const &a) : size_(a.size_), data_(new T[size_])
  {
    for (int i = 0; i < size_; ++i)
      data_[i] = a[i];
    cout << "Array(Array const &a)" << endl;
  };
  Array &operator=(Array const &a) = default;
  ~Array() { delete[] data_; };

  size_t size() const;
  T &operator[](size_t i) { return *(data_ + i); };
  T const &operator[](size_t i) const { return *(data_ + i); };

  void swap(Array &a)
  {
    std::swap(a.data_, data_);
    std::swap(a.size_, size_);
  }

  // реализуйте перемещающий конструктор
  Array(Array &&a)
  {
    swap(a);
    cout << "Array(Array &&a)" << endl;
  }

  // реализуйте перемещающий оператор присваивания
  Array &operator=(Array &&a)
  {
    swap(a);
    cout << "Array &operator=(Array &&a)" << endl;
    return *this;
  }

private:
  size_t size_ = 0;
  T *data_ = nullptr;
};

#endif // __2_2_1_PEREMCONCTRUCTOR
