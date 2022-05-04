#include <iostream>
using namespace std;

int sum(int x, int y);
int sum(int y);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        cout<<sum(x,y)<<endl;
    }
    return 0;
}

int sum(int x, int y)
{
    if(x>1)
    {
        return sum(x-1,y);
    }
    else{
        return sum(y);
    }
}

int sum(int y)
{
    return y*(y+1)/2;
}