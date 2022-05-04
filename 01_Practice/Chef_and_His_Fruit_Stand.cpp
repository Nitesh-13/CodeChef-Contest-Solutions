#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        (x>=y)?(y*2<=x)?cout<<y<<"\n":cout<<x/2<<"\n":cout<<x/2<<"\n";
    }
    return 0;
}