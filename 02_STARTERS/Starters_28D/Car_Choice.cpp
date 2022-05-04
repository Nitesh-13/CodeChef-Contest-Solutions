#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        float x1,x2,y1,y2;
        cin>>x1>>x2>>y1>>y2;
        float avg1,avg2;
        avg1 = y1/x1;
        avg2 = y2/x2;
        if(avg1<avg2)
        {
            cout<<"-1\n";
        }
        else if(avg1>avg2)
        {
            cout<<"1\n";
        }
        else{
            cout<<"0\n";
        }

    }
    return 0;
}