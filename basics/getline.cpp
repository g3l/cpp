// cin with strings
//getstring extracts Sentences not just single words like cin
#include <iostream>
#include <string>
using namespace std;

int main ()
{
  string mystra, mystrb, name;
  cout << "What's your Full name? ";
  getline(cin, name);
  cout << "What's your Address? ";
  getline (cin, mystra);
  cout << "What is your Postcode? ";
  getline (cin, mystrb);
  cout << name <<"\n" << mystra <<  "\n"<< mystrb;
  return 0;
}
