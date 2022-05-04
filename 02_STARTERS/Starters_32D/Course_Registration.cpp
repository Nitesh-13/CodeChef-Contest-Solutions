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
        ((x+z)>y)?cout<<"No\n":cout<<"Yes\n";
    }
    return 0;
}