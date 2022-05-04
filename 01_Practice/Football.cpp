#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        int x,max = 0,a;
        cin>>x;
        long long arr[x];
        for(long long i = 0;i<x;i++)
        {
            cin>>arr[i];
        }
        for(long long i = 0;i<x;i++)
        {
            cin>>a;
            long long temp = arr[i]*20 - a*10;
            if(temp<0)
            {
                temp = 0;
            }
            if(temp>max)
            {
                max = temp;
            }
        }
        cout<<max<<"\n";

    }
    return 0;
}