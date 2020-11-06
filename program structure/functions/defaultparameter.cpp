// default values in functions
#include <iostream>
using namespace std;

int divide (int a, int b=2)
{
  int r;
  r=a/b;
  return (r);
}

int main ()
{
  cout << divide (12) << '\n';
  cout << divide (20,4) << '\n';
  return 0;
}
//results are 6 and 5 respectively
// The call passes two arguments to the function. Therefore, the default value for b (int b=2) is ignored, and b takes the value passed as argument, that is 4, yielding a result of 5.
