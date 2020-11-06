// static vs automatic storage
#include <iostream>
using namespace std;

int x;

int main ()
{
    int y;
    cout << x << '\n';
    cout << y << '\n';
    return 0;
}

// The actual output may vary, but only the value of x is guaranteed to be zero. y can actually contain just about any value (including zero).
