/*
Курс на степике Программирование на языке C++ (продолжение)
https://stepik.org/course/3206/syllabus?auth=login
Под каждое задание отдельный хедер

"_"  - одна черта перед именем файла значит, что речь о первой части курса
Программирование на языке C++: https://stepik.org/course/7/syllabus?auth=login

"__" - две черты - речь о второй часте курсе( о продолжении)
https://stepik.org/course/3206/syllabus
*/

#include <iostream>

using namespace std;

#include "__1.2.1.Base.h"
int _121main()
{
  D3 *d3 = new D3;

  D2 *d2 = (D2 *)D1BaseToD2Base((D1 *)d3);
  cout << d3 << endl;
  cout << (D1 *)d3 << endl;
  cout << d2 << endl;
  cout << (D1 *)d2 << endl;

  return 0;
}

#include "__2.1.print_values.h"
int main21()
{
  print_values(cout, 5, 10, 1.2, "фигульки");
  print_values(cout);
  return 0;
}

#include "__2.2.PeremConstructor.h"
int main22()
{
  Array<int> A(0);
  Array<int> B(move(A));
  const Array<int> *p = &B;
  Array<int> C(move(*p));
  return 0;
}

#include "__2.3.newInC++14.h"
int main()
{

  return 0;
}
