#include "_1.2.Base.h"
#include <iostream>

using namespace std;

int /*_12*/ main()
{
  D3 *d3 = new D3;

  D2 *d2 = (D2 *)D1BaseToD2Base((D1 *)d3);
  cout << d3 << endl;
  cout << (D1 *)d3 << endl;
  cout << d2 << endl;
  cout << (D1 *)d2 << endl;

  return 0;
}
