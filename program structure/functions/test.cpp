#include <iostream>
using namespace std;
int check(int& x)
{
    if (x%2!=0)
        cout << "odd\n";
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
        cout << x << " is ";
        check(x);
    }
    while (x!=0);

}
