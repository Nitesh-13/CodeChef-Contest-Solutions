#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        if(x>50){
            cout<<"A\n";
        }
        else if(y>50){
            cout<<"B\n";
        }
        else if(z>50){
            cout<<"C\n";
        }
        else{
            cout<<"NOTA\n";
        }
    }
    return 0;
}