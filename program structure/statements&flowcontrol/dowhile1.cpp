#include <iostream>
#include <string>
using namespace std;

int main()
{
    string userin;

    do{
        cout << "Enter text: ";
        getline(cin, userin);
        cout << "You entered: "<< userin << endl;
    }
    while (userin != "asega");
}
