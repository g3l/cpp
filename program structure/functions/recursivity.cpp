// factorial calculator
//Recursivity is when functions call themselves
#include <iostream>
using namespace std;

long factorial (long a)
{
    if (a > 1)
        return (a * factorial (a-1));
    else
        return 1;
}

int main ()
{
    long number = 0; //33 is the highest number you can recurse on this program

    do
    {
        cout <<"Enter 1 to stop.\nwhat number do you want to the factorial of: "<<endl;
        cin >> number;
        cout << number << "! = " << factorial (number)<<endl;
    }
    while(number!=1);
    return 0;
}
