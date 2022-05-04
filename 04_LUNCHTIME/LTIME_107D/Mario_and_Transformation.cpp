#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        int x;
        string a = "NORMAL",b = "HUGE", c = "SMALL",ans;
        bool aB = false, bB = false;
        cin>>x;
        for(int i = 0;i<x;i++)
        {
            if(aB == false && bB == false)
            {
                ans = b;
                aB = true;
            }
            else if(aB == true && bB == false)
            {
                ans = c;
                bB = true;
            }
            else{
                ans = a;
                aB = false;
                bB = false;
            }
        }
        cout<<ans<<"\n";

    }
    return 0;
}