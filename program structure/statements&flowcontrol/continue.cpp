#include <iostream>
using namespace std;
int main()
{
    int x;
    for(x=10; x>0; x--)
    {
        if (x==5) break;
        cout << x<<endl;
    }
    cout << "you've only gone and done it\n";
}
