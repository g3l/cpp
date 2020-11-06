#include <iostream>
using namespace std;

#define PI 3.14159  //don't require ; at the end
#define NEWLINE '\n'

int main ()
{
  double r=5.0;               // radius
  double circle;

  circle = 2 * PI * r;
  cout << circle;//should give same result
  cout << NEWLINE;

}
