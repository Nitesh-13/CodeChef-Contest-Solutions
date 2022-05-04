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
        int limak = 0, bob = 0;
        while(true)
        {
            limak = bob + 1;
            if(limak > x)
            {
                cout<<"Bob\n";
                break;
            }
            bob = limak + 1;
            if(bob > y)
            {
                cout<<"Limak\n";
                break;
            }
            
        }
    }
    return 0;
}