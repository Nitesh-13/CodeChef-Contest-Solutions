#include <bits/stdc++.h>
using namespace std; 

int main()
{ 

    long long t;
    cin>>t;
    while(t--)
    {
        long long n,x;
        cin>>n;
        bool flag=true;
        map<int,int> mp;
        for(int i=0;i<2*n;i++)
        {
            cin>>x;
            mp[x]++;
        }
        for(int i=0;i<2*n;i++)
        {
            if(mp[i]==1)
            {
                flag=false;
                break;
            }
            else if(mp[i]==0)
            {
                break;
            }                  
        }
        flag?cout<<"YES\n":cout<<"NO\n";
    }
    return 0;
}