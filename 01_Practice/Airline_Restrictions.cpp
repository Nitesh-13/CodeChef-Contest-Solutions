#include <iostream>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long x,y,z,a,b;
        cin>>x>>y>>z>>a>>b;
        ((x+y<=a && z<=b)||(y+z<=a && x<=b)||(x+z<=a && y<=b))?cout<<"YES\n":cout<<"NO\n";
    }
    return 0;
}