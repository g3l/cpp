#include <iostream>
using namespace std;

int check (int x)
{
    if (x%2!=0)
        cout << "Odd\n";
    else
        cout << "Even\n";
}
int main()
{
    int x;
    do
    {
        cout << "Enter a number: ";
        cin >> x;

        check(x);
    }
    while (x!=0);
}
//add this to calculator program
