#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,sum = 0;
        string y;
        cin>>x>>y;
        for(int i = 0;i<x;i++)
        {
            if(y[i] == 'N')
            {
                sum++;
            }
            if(y[i] == 'I')
            {
                cout<<"INDIAN\n";
                break;
            }
            else if(y[i] == 'Y')
            {
                cout<<"NOT INDIAN\n";
                break;
            }
            else if(sum == x)
            {
                cout<<"NOT SURE\n";
                break;
            }
        }
    }
    return 0;
}