#include <iostream>
using namespace std;

int checkTie(int x, int y);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a1,a2,a3,b1,b2,b3;
        cin>>a1>>a2>>a3>>b1>>b2>>b3;
        int total1 = a1+a2+a3;
        int total2 = b1+b2+b3;
        int topper;
        topper = (total1>total2)?1 : checkTie(total1, total2);
        if(topper == 1)
        {
            cout<<"DRAGON\n";
        }
        else if(topper==-1)
        {
            cout<<"SLOTH\n";
        }
        else{
            cout<<"TIE\n";
        }
    }
    return 0;
}

int checkTie(int x, int y)
{
    if(x==y)
    {
        if(a)
    }
}