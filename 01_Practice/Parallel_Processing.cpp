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
        int n;
        cin>>n;
        int myArr[n];
        int sum = 0,x1 = 0, ans;
        for(int i = 0;i<n;i++)
        {
            cin>>myArr[i];
            sum+=myArr[i];
        }
        ans = sum;
        for(int i = 0;i<n-1;i++)
        {
            x1 += myArr[i];
            int rem = sum - x1;
            ans = min(ans,max(x1,rem));
        }
        cout<<ans<<"\n";
    }
    return 0;
}