#include <iostream>
using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    (x==1 && y==1)?cout<<"https://discuss.codechef.com\n":(x==1 && y==0)?cout<<"https://www.codechef.com/contests\n":cout<<"https://www.codechef.com/practice\n";
    return 0;
}