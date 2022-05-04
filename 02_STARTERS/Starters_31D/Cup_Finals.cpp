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
        (abs(x-y)<=z)?cout<<"YES\n":cout<<"NO\n";
    }
    return 0;
}