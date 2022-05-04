#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        int myArr[3];
        cin>>x>>myArr[0]>>myArr[1]>>myArr[2];
        int size = sizeof(myArr)/sizeof(myArr[0]);
        sort(myArr,myArr+size);
        cout<<(x-1)*myArr[0]+myArr[1]<<"\n";
    }
    return 0;
}