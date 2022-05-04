#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        int result = 1;
        cin>>x;
        for(int i=1; i<=x;i++)
        {
            result *= i;
        }
        cout<<result<<"\n";
    }
    return 0;
}