#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        (x%4==0)?cout<<x/4<<"\n":cout<<(x/4)+1<<"\n";
    }
    return 0;
}