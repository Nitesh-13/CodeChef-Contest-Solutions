#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        string y;
        cin>>x>>y;
        int j = -1;
        for(int i = 0;i<x;i++)
        {
            if (y[i] != '1')
            {
                j++;
                swap(y[i],y[j]);
            }
        }
        cout<<y<<"\n";
    }
    return 0;
}