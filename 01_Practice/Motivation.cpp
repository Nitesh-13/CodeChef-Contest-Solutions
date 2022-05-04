#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long x,y,temp1,temp2,maxSp = 0,maxRat = 0;
        cin>>x>>y;
        for(int i = 0;i<x;i++)
        {
            cin>>temp1>>temp2;
            if(temp1<=y && temp2>maxRat)
            {
                maxRat = temp2;
            }
        }
        cout<<maxRat<<"\n";
    }
    return 0;
}