#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin >> x;
        vector<int> myVec;
        int temp = 0;
        for (int i = 0;i<x;i++)
        {
            int y;
            cin>>y;
            myVec.push_back(y);
        }
        for(auto i : myVec)
        {
            if(i%2==0)
            {
                temp++;
            }
        }
        ((x-temp)%2 == 0)?cout<<min(temp, (x-temp)/2)<<"\n":cout <<temp<<"\n";
    }
    return 0;
}