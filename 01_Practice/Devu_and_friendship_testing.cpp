#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,count = 0;
        cin>>x;
        int myArr[x];
        for(int i = 0;i<x;i++)
        {
            cin>>myArr[i];
        }
        for(int i = 0;i<x;i++)
        {
            for(int j=i+1; j<x; j++)
            {
                if(myArr[i] == myArr[j])
                {
                    count++;
                    break;
                }
            }
        }
        cout<<x-count<<"\n";
    }
    return 0;
}