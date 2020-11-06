#include <iostream>
using namespace std;

int main()
{
    int i, n;
    for ( n=0, i=20 ; n!=i ; ++n, --i )
    {
        cout<<"I: "<< i<<", \t";
        cout<<"\tN:"<< n<<", \n";
    }
    return 0;
}
