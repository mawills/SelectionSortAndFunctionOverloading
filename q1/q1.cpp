#include <iostream>
#include "complex.h"

using namespace std;

int main()
{
  Complex x(0,0);
  Complex y(2,3);
  Complex z,w,v;

  cout << "x is "; x.printComplex();
  cout << "y is "; y.printComplex();
  cout << "z is "; z.printComplex();

  z = x + y;
  cout << "x + y = "; z.printComplex();
  w = x - y;
  cout << "x - y = "; w.printComplex();
  v = x * y;
  cout << "x * y = "; v.printComplex();

  if (z == w)
    cout << " z = w" << endl;
  else
    cout << " z != w" << endl;
}
