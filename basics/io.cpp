// i/o example
//cin only extracts single words. no space
#include <iostream>
#include <string>
using namespace std;

int main ()
{
  int i;
  string a, b;
  cout << "Please enter first and last your name: ";
  cin >> a >> b;
  cout << "Firstname: "<<a<<"\tLastname: "<<b <<endl;
  cout << "Please enter the year you were born in: ";
  cin >> i; //cin is input/cout is output
  cout << "The value you entered is " << i;
  cout << "\nWhich means you are " << 2018-i << "years old.\n";
  return 0;
}
