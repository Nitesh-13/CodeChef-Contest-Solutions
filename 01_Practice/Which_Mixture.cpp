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
        (x>0 && y>0)?cout<<"Solution\n":(x==0)?cout<<"Liquid\n":cout<<"Solid\n";
    }
    return 0;
}