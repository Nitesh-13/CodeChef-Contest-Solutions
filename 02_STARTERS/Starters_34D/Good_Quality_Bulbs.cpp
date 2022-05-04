#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,sum = 0;
        cin>>n>>x;
        int myArr[n-1];
        for(int i = 0;i<n-1;i++)
        {
            cin>>myArr[i];
            sum+=myArr[i];
        }
        (((x*n)-sum)>0)?cout<<(x*n)-sum<<"\n":cout<<0<<"\n";
    }
    return 0;
}