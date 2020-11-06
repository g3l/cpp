// overloaded functions
#include <iostream>
using namespace std;

int sum (int& a, int& b)
{
    return a+b;
}

double sum (double a, double b)// functions can have same name and as field as long as type is different
{
    return a+b;
}

int main ()
{
    cout << sum (10,20) << '\n';
    cout << sum (1.0,1.5) << '\n';
    return 0;
}
