#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        double cost = x*y;
        cout.precision(6);
        if(x>1000)
        {
            cost -= (cost*0.1);
        }
        cout<<fixed<<cost<<endl;
    }
    return 0;
}