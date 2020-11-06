#include <iostream>
#include <string>

using namespace std;

int main()
{
    int numguess;
    string userin;

    do
    {
        cout << "Enter a number between 10 and 50: ";
        getline(cin, userin);
        numguess = stoi(userin); //stoi converts string to integer
        cout << numguess<<endl;
        if (numguess<10|numguess>50)
        {
            cout <<"Hint, you must guess a number between 1 and 10"<<endl;
        }
    }
    while (numguess!=26);
    cout << "Well done, you have guessed correctly\n";
}
