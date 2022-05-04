#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        (z/y>x)?cout<<x<<"\n":cout<<z/y<<"\n";
    }
    return 0;
}