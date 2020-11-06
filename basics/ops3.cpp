// conditional operator
#include <iostream>
using namespace std;

int main ()
{
  int a,b,c;

  a=12;
  b=7;
  c = (a>b) ? a : b; // is a > b : if so print a else b

  cout << c << '\n';
}
