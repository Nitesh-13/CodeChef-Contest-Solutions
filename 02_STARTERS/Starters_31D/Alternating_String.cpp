#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,count1 = 0,count0 = 0;
        string bin;
        cin>>x>>bin;
        for(int i = 0;i<x;i++)
        {
            (bin[i]=='1')?count1++:count0++;
        }
        (min(count1,count0) == max(count1,count0))?cout<<2*min(count1,count0)<<"\n":cout<<2*min(count1,count0)+1<<"\n";
    }
    return 0;
}