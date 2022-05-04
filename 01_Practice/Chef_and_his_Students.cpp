#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int count =0;
        cin>>s;
        for(int i = 0;i<s.length();i++)
        {
            if(s[i]=='<')
            {
                s[i] = '>';
            }
            else if(s[i]=='>')
            {
                s[i] = '<';
            }
        }
        for(int i = 0;i<s.length()-1;i++)
        {
            if(s[i] == '>' && s[i+1]== '<')
            {
                count++;
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}