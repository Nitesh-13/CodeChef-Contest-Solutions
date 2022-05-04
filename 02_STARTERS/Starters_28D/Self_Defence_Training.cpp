#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count = 0;
        cin>>n;
        int myArr[n];
        for(int i = 0;i<n;i++)
        {
            cin>>myArr[i];
            if(myArr[i]>=10 && myArr[i]<=60)
            {
                count++;
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}