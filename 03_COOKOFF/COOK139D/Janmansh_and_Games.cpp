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
        int count = 0;
        while(count!=y)
        {
            if(x<=y)
            {
                x++;
                count++;
            }
            else
            {
                x--;
                count++;
            }
        }
        if(x%2!=0)
        {
            cout<<"Jay\n";
        }
        else{
            cout<<"Janmansh\n";
        }
    }
    return 0;
}