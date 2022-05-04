#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        (x%5==0)?(x%10==0)?cout<<x/10<<"\n":cout<<(x/10)+1<<"\n":cout<<-1<<"\n";
    }
    return 0;
}