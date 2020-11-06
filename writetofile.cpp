// basic file operations
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main ()
{
    ofstream myfile;
    string userin;
    do
    {
        myfile.open ("example.txt");
        cout << "Enter text to write in the file:\n";
        getline(cin, userin);
        myfile << userin;

    }
    while (userin!="finish");
    myfile.close();
    return 0;
}
