#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x,temp,poscount = 0,negcount = 0;
        cin>>x;
        for(int i = 0;i<x;i++)
        {
            cin>>temp;
            (temp>0)?poscount++:(temp<0)?negcount++:negcount+0;
        }
        long long res = ((poscount*(poscount-1))/2) + ((negcount*(negcount-1))/2);
        cout<<res<<"\n";
    }
    return 0;
}