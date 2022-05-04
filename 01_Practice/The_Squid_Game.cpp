#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x, sum = 0;
        cin>>x;
        int myarr[x];
        for(int i = 0;i<x;i++)
        {
            cin>>myarr[i];
            sum+= myarr[i];
        }
        cout<<sum-*min_element(myarr,myarr+x)<<"\n";
    }
    return 0;
}