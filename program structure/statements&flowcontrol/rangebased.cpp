// range-based for loop
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main ()
{
    string str;
    cout << "Enter text: ";
    getline(cin, str);

    for (char c : str)
        cout << "[" << c << "]";
    /*
    for (auto c : str)
    cout << "[" << c << "]";*/
}
