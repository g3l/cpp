// using namespace example
#include <iostream>
using namespace std; //std::cout << "Hello world!"; is more common than cout << "Hello world!";

namespace first
{
int x = 5;
}

namespace second
{
double x = 3.1416;
}

int main ()
{
    {
        using namespace first;
        cout << x << '\n';
    }
    {
        using namespace second;
        cout << x << '\n';
    }
    return 0;
}
