#include "__2.1.print_values.h"
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

int main()
{
  print_values(cout, 5, 10, 1.2, "фигульки");
  print_values(cout);
  return 0;
}
