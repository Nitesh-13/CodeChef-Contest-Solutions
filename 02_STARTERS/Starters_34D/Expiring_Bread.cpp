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
        (y*z>=x)?cout<<"Yes\n":cout<<"No\n";
    }
    return 0;
}