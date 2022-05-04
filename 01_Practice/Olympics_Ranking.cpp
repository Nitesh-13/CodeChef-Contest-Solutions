#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int myArr[6];
        for(int i = 0;i<6;i++)
        {
            cin>>myArr[i];
        }
        int x = myArr[0]+myArr[1]+myArr[2];
        int y = myArr[3]+myArr[4]+myArr[5];
        (x>y)?cout<<"1\n":cout<<"2\n";
    }
    return 0;
}