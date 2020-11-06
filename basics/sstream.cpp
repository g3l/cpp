//did this one from memory without checking with previous work
//work without any errors first time

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    string mystring;
    int total = 0;
    float grade = 0;

    cout << "Enter grade you achieved: ";
    getline(cin, mystring);
    stringstream(mystring) >> grade;
    cout << "what is it out of: ";
    getline(cin, mystring);
    stringstream(mystring) >> total;

    cout << "you have achieved: "<< grade/total*100<<"% of "<< total<<endl;
    return 0;
}
