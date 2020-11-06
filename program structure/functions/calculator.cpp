//calculator
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int addition(int& a, int& b)
{
    int r;
    r = a + b;
    return r;
}
int subtraction(int& a, int& b)
{
    int r;
    r = a - b;
    return r;
}
int multiplication(int& a, int& b)
{
    int r;
    r=a*b;
    return r;
}
int division(int& a, int& b)
{
    int r;
    r=a/b;
    return r;
}
int modulo(int& a, int& b)
{
    int r;
    r=a%b;
    return r;
}
float percentage (float a, float b)
{
    float r;
    r=a/100*b;
    return r;
}
int check (int& x)
{
    if (x%2!=0)
        cout<< "Odd\n";
    else
        cout << "Even\n";
}
long factorial (long a)
{
    if (a > 1)
        return (a * factorial (a-1));
    else
        return 1;
}
void quit()
{
    void exit();
}

int main()
{
    int a, b;
    char op;
    string userin;

startagain:
    cout << "Calculator program:\nWhat calculation would you like to do?\nEnter: \nA for addition\nB for subtraction\nC for Multiplication\nD for Division\nE for Modulo\nF for Factorial check\nG for Percentage\nH to check if number is odd or even\nQ to quit\n";
    getline(cin, userin);
    stringstream(userin) >> op;

    switch (op)
    {
    case 'A':
    case 'a':
        cout << "Enter the first number: ";
        getline(cin, userin);
        stringstream(userin) >> a;
        cout << "Enter the second number: ";
        getline(cin, userin);
        stringstream(userin) >> b;
        cout << "Result:\t" << addition(a, b) << endl;
        goto startagain;
        break;
    case 'B':
    case 'b':
        cout << "Enter the first number: ";
        getline(cin, userin);
        stringstream(userin) >> a;
        cout << "Enter the second number: ";
        getline(cin, userin);
        stringstream(userin) >> b;
        cout << "Result:\t" << subtraction(a, b) << endl;
        goto startagain;
        break;
    case 'C':
    case 'c':
        cout << "Enter the first number: ";
        getline(cin, userin);
        stringstream(userin) >> a;
        cout << "Enter the second number: ";
        getline(cin, userin);
        stringstream(userin) >> b;
        cout << "Result:\t" << multiplication(a, b) << endl;
        goto startagain;
        break;
    case 'D':
    case 'd':
        cout << "Enter the first number: ";
        getline(cin, userin);
        stringstream(userin) >> a;
        cout << "Enter the second number: ";
        getline(cin, userin);
        stringstream(userin) >> b;
        cout << "Result:\t" << division(a, b) << endl;
        goto startagain;
        break;
    case 'E':
    case 'e':
        cout << "Enter the first number: ";
        getline(cin, userin);
        stringstream(userin) >> a;
        cout << "Enter the second number: ";
        getline(cin, userin);
        stringstream(userin) >> b;
        cout << "Result:\t" << modulo(a, b) << endl;
        goto startagain;
        break;
    case 'F':
    case 'f':
        cout << "Enter a number to check its factorial: ";
        getline(cin, userin);
        stringstream(userin) >> a;
        cout<< a<<"!="<<factorial(a)<<endl;
        goto startagain;
        break;
    case 'G':
    case 'g':
        cout << "Enter the percentage you want to work out: ";
        getline(cin, userin);
        stringstream(userin) >> a;
        cout << "Enter the number: ";
        getline(cin, userin);
        stringstream(userin) >> b;
        cout << "Result:\t" <<a<<"% of "<<b<<" =\t"<< percentage(a, b) << endl;
        goto startagain;
        break;
    case 'h':
    case 'H':
        do
        {
            cout << "Enter a number to check if its odd or even: ";
            getline(cin, userin);
            stringstream(userin) >> a;

            check(a);
        }
        while (a!=0);
        goto startagain;
    case 'Q':
    case 'q':
        quit;
        break;
    default:
        cout << "invalid operator\n";
        goto startagain;
    }

}
