#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,temp = 1,result = 0,sum = 0;
        cin>>n;
        vector<int>myVec;
        for(int i = 0;i<n;i++)
        {
            int x;
            cin>>x;
            myVec.push_back(x);
            sum += myVec[i];
        }
        while(sum>0)
        {
          sum -= temp;
          result += 1;
          temp += 1;
        }
        (sum<0)?cout<<result-1<<"\n":cout<<result<<"\n";
    }
    return 0;
}
