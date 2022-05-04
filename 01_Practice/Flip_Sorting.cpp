#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string bin;
        cin>>n>>bin;
        vector<vector<int>>res;
        for(int i = n-1;i>=0;i--)
        {
          if(bin[i]=='0')
          {
            int x = i+1;
            for(int j = 0;j<=i;j++)
            {
              if(bin[j]=='1') bin[j]='0';
              else bin[j] = '1';
            }
            res.push_back({1ll,x});
          }
        }
        int siz = res.size();
        cout<<siz<<endl;
        for(auto x:res) cout<<x[0]<<" "<<x[1]<<endl;
    }
    return 0;
}