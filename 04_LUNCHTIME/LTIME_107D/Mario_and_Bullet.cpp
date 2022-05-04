#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        if(y%x==0)
        {
            if(z-(y/x) > 0)
            {
                cout<<z-(y/x)<<"\n";
            }
            else{
                cout<<0<<"\n";
            }
        }
        else{
            if(z-((y/x)+1) > 0)
            {
                cout<<z-(y/x)+1<<"\n";
            }
            else{
                cout<<0<<"\n";
            }
        }
    }
    return 0;
}