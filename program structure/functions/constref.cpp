#include <iostream>
#include <string>
#include <sstream>

using namespace std;
/*
string concatenate (string& a, string& b)
{
  return a+b;
}
*/
inline string concatenate (const string& a, const string& b)
{
  return a+b;
}// This informs the compiler that when concatenate is called, the program prefers the function to be expanded inline, instead of performing a regular call. inline is only specified in the function declaration, not when it is called.
int main()
{
    string a = "Godfrey", b = " Lemi", r;
    r = concatenate(a, b);
    cout << r << endl;
}
