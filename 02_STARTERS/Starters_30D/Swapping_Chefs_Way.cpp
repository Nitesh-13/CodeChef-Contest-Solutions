#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        string y,z;
        cin>>x>>y;
        z = y;
        sort(z.begin(),z.end());
        int j = x-1;
        for(int i = 0;i<x;i++)
        {
            if(i<j)
            {
                if(y[i]>y[j])
                swap(y[i],y[j]);
                j--;
            }
        }
        (y==z)?cout<<"YES\n":cout<<"NO\n";
    }
    return 0;
}