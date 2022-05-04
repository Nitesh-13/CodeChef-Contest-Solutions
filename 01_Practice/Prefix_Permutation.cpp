#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x,y;
        cin>>x>>y;
        vector<long long> nums;

        for(int i=0;i<y;++i)
        {
            long long c;
            cin>>c;
            nums.push_back(c);
        }
        
        sort(nums.begin(), nums.end());

        long long temp = 0;
        for(int i = 0;i<nums.size();++i)
        {
            long long num = nums.at(i);
            for(int j = num; j>temp;j--)
            {
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}