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
        while(y>x)
        {
            y = y-x-1;
        }
        cout<<y<<"\n";
    }
    return 0;
}