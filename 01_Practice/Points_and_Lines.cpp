#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        set<int> s1;
        set<int> s2;
        for(int i = 0;i<x;i++)
        {
            int a,b;
            cin>>a>>b;
            s1.insert(a);
            s2.insert(b);
        }
        cout<<s1.size()+s2.size()<<"\n";
    }
    return 0;
}