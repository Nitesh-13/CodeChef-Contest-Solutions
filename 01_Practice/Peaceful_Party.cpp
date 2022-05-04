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
        if((x+z)>y)
        {
            cout<<x+z<<"\n";
        }
        else{
            cout<<y<<"\n";
        }
    }
    return 0;
}