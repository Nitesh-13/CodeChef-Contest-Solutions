#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,count = 0;
        string str; 
        cin>>x>>str;
        for(int i = 0;i<x;i++)
        {
            if(str[i]=='0')
            {
                count++;
            }
        }
        if(count>30)
        {
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
        
    }
    return 0;
}