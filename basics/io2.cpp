// i/o example
//cin only extracts single words. no space
#include <iostream>
#include <string>
using namespace std;

int main ()
{
  int i;
  string a;
  cout << "Please enter your full name: ";
  getline(cin, a); //easier to collect more than 1 word. more efficient
  cout << "Full name: "<< a <<endl;
  cout << "Please enter the year you were born in: ";
  cin >> i; //cin is input/cout is output
  cout << "The value you entered is " << i;
  cout << "\nWhich means you are " << 2018-i << "years old.\n";
  return 0;
}
