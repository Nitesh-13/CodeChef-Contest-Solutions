#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long x,y;
        cin>>x>>y;
        (y%x==0)?cout<<"YES\n":cout<<"NO\n";
    }
    return 0;
}