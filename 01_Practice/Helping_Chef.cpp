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
        if(x<10)
        {
            cout<<"Thanks for helping Chef!\n";
        }
        else{
            cout<<"-1\n";
        }
    }
    return 0;
}