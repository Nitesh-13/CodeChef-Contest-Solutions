#include <iostream>
using namespace std;

int sum(int x);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,a;
        cin>>x;
        a = x+1;
        int y = sum(x)%2;
        int z = sum(a)%2;
        while(y==z)
        {
            a++;
            z = sum(a)%2; 
        }
        cout<<a<<endl;
    }
    return 0;
}

int sum(int x)
{
    int res = 0;
    while(x>0)
    {
        res+= x%10;
        x/=10;
    }
    return res;
}