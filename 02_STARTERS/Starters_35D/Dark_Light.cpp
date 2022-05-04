#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        if(k==1)
        {
            (n%4==0)?cout<<"On\n":cout<<"Ambiguous\n";
        }
        else{
            (n%4==0)?cout<<"Off\n":cout<<"On\n";
        }

    }
    return 0;
}