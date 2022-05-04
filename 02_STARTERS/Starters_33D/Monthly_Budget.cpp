#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        (30*y<=x)?cout<<"YES\n":cout<<"NO\n";
    }
    return 0;
}