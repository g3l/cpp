#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    int x;
    string mystring;

    cout << "enter x: ";
    getline(cin, mystring);
    stringstream(mystring) >> x;

    if (x > 0)
        cout << "x is positive";
    else if (x < 0)
        cout << "x is negative";
    else
        cout << "x is 0";
}
