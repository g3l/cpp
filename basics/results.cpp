#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string mystring;
    int ban = 0;
    float current = 0;

    cout << "How long is your ban? ";
    getline(cin, mystring);
    stringstream(mystring) >> ban;
    cout << "How much of the ban have you done so far: ";
    getline(cin, mystring);
    stringstream (mystring) >> current;

    cout <<"You have done: "<< current/ban*100<< "% of your ban so far\n";
}
