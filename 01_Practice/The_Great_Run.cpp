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
        int x,y,sum = 0;
        cin>>x>>y;
        int myArr[x];
        vector<int> myVec;
        for(int i = 0;i<x;i++)
        {
            cin>>myArr[i];
        }
        for(int i = 0;i<x-(y-1);i++)
        {
            for(int j = i;j<i+y;j++)
            {
                sum+=myArr[j];
            }
            myVec.push_back(sum);
            sum = 0;
        }
        sort(myVec.begin(),myVec.end(),greater<int>());
        cout<<myVec.at(0)<<"\n";
    }
    return 0;
}