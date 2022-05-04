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
        int sum = 0;
        while(x!=0)
        {
            sum += x%10;
            x /= 10;
        }
        cout<<sum<<"\n";
    }
    return 0;
}