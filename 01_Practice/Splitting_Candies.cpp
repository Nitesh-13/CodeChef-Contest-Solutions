#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long double x,y;
        cin>>x>>y;
        long double a = floor(x/y);
        long long b = x-(a*y);
        cout<<a<<" "<<b<<"\n";
    }
    return 0;
}