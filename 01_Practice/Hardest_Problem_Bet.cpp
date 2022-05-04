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
        (min(min(x,y),z)==x)?cout<<"Draw\n":(min(min(x,y),z)==y)?cout<<"Bob\n":cout<<"Alice\n";
    }
    return 0;
}