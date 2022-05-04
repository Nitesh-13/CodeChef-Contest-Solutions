#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y;
        z = 21-(x+y);
        if(z>10 || z<1)
        {
            cout<<"-1\n";
        }
        else{
            cout<<z<<"\n";
        }
    }
    return 0;
}