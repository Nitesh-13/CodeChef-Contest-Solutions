#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x;
        string y;
        cin>>x>>y;
        sort(y.begin(), y.end());
        (binary_search(y.begin(), y.end(), '5') || binary_search(y.begin(), y.end(), '0'))?cout<<"Yes\n":cout<<"No\n";
    }
    return 0;
}