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
        if(min(x,y)%2==0)
        {
            if(max(x,y)%2==0)
            {
                cout<<(x+y)/2<<endl;
            }
            else{
                cout<<((x+y)/2)+1<<endl;
            }
        }
        else{
            cout<<((x+y)/2)+1<<endl;
        }
    }
    return 0;
}