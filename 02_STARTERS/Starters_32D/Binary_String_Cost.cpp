#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y;
        int count1 = 0,count0 = 0;
        cin>>n>>x>>y;
        string bin;
        cin>>bin;
        // if(x>=y)
        // {
        //     sort(bin.begin(),bin.end(),greater<int>());
        //     for(int i = 0;i<n;i++)
        //     {
        //         (bin[i]=='1')?count1++:count0++;
        //     }
        //     (count1>0 && count0>0)?cout<<y<<"\n":cout<<"0\n";
        // }
        // else{
        //     sort(bin.begin(),bin.end());
        //     for(int i = 0;i<n;i++)
        //     {
        //         (bin[i]=='1')?count1++:count0++;
        //     }
        //     (count1>0 && count0>0)?cout<<x<<"\n":cout<<"0\n";
        // }

        sort(bin.begin(),bin.end(),greater<int>());
        for(int i = 0;i<n;i++)
        {
            (bin[i]=='1')?count1++:count0++;
        }
        (count1>0 && count0>0)?cout<<min(x,y)<<"\n":cout<<"0\n";

    }
    return 0;
}