#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int myArr[n];
        for(int i = 0;i<n;i++)
        {
            cin>>myArr[i];
        }
        int count = 0;
        for(int i = 0;i<n;i++)
        {
            if(myArr[i]==0)
            {
                count++;
            }
        }
        cout<<max(count,n-count)<<"\n";
    }
    return 0;
}