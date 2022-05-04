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

        int temp = min(x,y);
        int smallest = min(temp,z);
        cout<<(x+y+z)-smallest<<"\n";
    }
    return 0;
}