#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        ((y*3-(x-y))>=z)?cout<<"PASS\n":cout<<"FAIL\n";
    }
    return 0;
}