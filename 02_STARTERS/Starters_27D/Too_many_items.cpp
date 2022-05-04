#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        float x;
        cin>>x;
        cout<<ceil(x/10)<<"\n";
    }
    return 0;
}