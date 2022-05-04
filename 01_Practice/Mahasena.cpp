#include <iostream>
using namespace std;

int main()
{
    int x;
    int y=0,z=0;
    cin>>x;
    int arr[x];
    for(int i =0;i<x;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<x;i++)
    {
        if(arr[i]%2==0)
        {
            y++;
        }
        else
        {
            z++;
        }
    }
    if(y>z)
    {
        cout<<"READY FOR BATTLE"<<endl;
    }
    else{
        cout<<"NOT READY"<<endl;
    }

    return 0;
}