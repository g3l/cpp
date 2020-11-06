// void function example
#include <iostream>
using namespace std;

void printmessage (void)
{
    cout<< "This is a function\n";
}

int main()
{
    printmessage();
}
/*
void printmessage () //void can also be used in the function's parameter list to explicitly specify that the function takes no actual parameters when called. For example, printmessage could have been declared as:
{
  cout << "I'm a function!"<<endl;
}

int main ()
{
  printmessage ();
}
*/
