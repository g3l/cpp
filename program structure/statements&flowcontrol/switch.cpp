#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char op;

    cout << "Operators: \n+ = Addition\n- = Subtraction\n* = Multiplication\n/ = Division\n% = Modulo\nEnter a value of a: ";
    cin >> a;
    cout << "enter operator: ";
    cin >> op;
    cout << "Enter a value of b:\n";
    cin >> b;

    switch (op)
    {
    case '+':
        cout << a<< "\t+\t"<<b<< "\t=\t" << a+b <<endl;
        break;
    case '-':
        cout << a<< "\t-\t"<<b<< "\t=\t" << a-b <<endl;
        break;
    case '/':
        cout << a<< "\t/\t"<<b<< "\t=\t" << a/b <<endl;
        break;
    case '*':
        cout << a<< "\t*\t"<<b<< "\t=\t" << a*b <<endl;
        break;
    case '%':
        cout << a<< "\tmodulo\t"<<b<< "\t=\t" << a%b <<endl;
        break;
    default:
        cout << "invalid operator";
    }
}
