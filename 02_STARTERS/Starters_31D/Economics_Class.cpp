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
        int myArr1[x],myArr2[x];
        for(int i = 0;i<x;i++)
        {
            cin>>myArr1[i];
        }
        for(int i = 0;i<x;i++)
        {
            cin>>myArr2[i];
            if(myArr1[i]==myArr2[i])
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}