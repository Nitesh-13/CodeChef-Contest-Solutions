#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        int sum = 0;
        cin>>x>>y;
        int days[x];
        for(int i=0;i<x;i++)
        {
            cin>>days[i];
        }
        int arrsize = sizeof(days)/sizeof(days[0]);
        sort(days, days+arrsize);

        for(int i = x-1;i>=0;i--)
        {
            sum += days[i];
            if(sum >= y)
            {
                cout<<i<<"\n";
                break;
            }
        }
        
    }
    return 0;
}