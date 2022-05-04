#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,result;
        cin>>x>>y;
        vector<int> myVec;
        for(int i = 0;i<x;i++)
        {
            int a;cin>>a;
            myVec.push_back(a);
        }
        int max = *max_element(myVec.begin(),myVec.end());
        if(y>=x-1)
        {
            cout<<max<<"\n";
            continue;
        }
        else{
            sort(myVec.begin(),myVec.end());
            cout<<myVec[x-1-(x-1-y)]<<"\n";
        }
    }
    return 0;
}