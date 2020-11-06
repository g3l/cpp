#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string userin;
    int total = 0;
    float result = 0;

    cout << "Enter mark achieved: ";
    getline(cin, userin);
    stringstream(userin) >> result;
    cout << "Out of: ";
    getline(cin, userin);
    stringstream(userin) >> total;
    cout << "You have achieved:\t" << result/total*100 << "%" << endl;


    return 0;
}
