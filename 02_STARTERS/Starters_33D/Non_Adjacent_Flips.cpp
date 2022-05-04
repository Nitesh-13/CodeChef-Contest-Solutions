#include <iostream>
#include <string>
#include <vector>
using namespace std;

int flips(int x, string y);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,count = 0;
        string y;
        cin>>x>>y;
        cout<<flips(x,y)<<"\n";
    }
    return 0;
}

int flips(int x, string y)
{
    int sum = 0;
    vector<int> myvec;
    for(int i = 0;i<x;i++)
    {
        if(y[i]=='1')
        {
            sum++;
            myvec.push_back(i);
        }
    }
    int temp = 0;
    if(sum==0)
    {
        return 0;
    }
    else if(x==1 && myvec[0]=='1')
    {
        return 1;
    }
    else{
        for(int i = 1;i<sum;i++)
        {
            if((myvec[i]-1)== myvec[i-1])
            {
                temp++;
            }
            if(temp>0)
            {
                return 2;
            }
        }
        return 1;
    }
}