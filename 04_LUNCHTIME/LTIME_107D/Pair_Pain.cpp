#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long x,count1 = 0,count2 = 0,sum = 0;
        cin>>x;
        long long myArr[x];
        for(long long i = 0;i<x;i++)
        {
            cin>>myArr[i];
            sum+=myArr[i];
            if(myArr[i]==2)
            {
                count2++;
            }
            if(myArr[i]==1)
            {
                count1++;
            }
        }
        long long ans = count1*(x-count1);
        if(count1>1)
        {
            ans+=count1*(count1-1)/2;
        }
        if(count2!=0)
        {
            ans+=count2*(count2-1)/2;
        }
        cout<<ans<<"\n";

    }
    return 0;
}