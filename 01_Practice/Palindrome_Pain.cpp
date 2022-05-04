#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(x%2 != 0 && y%2 != 0)
        {
            cout<<-1<<"\n";
        }
        else if(x<=1 || y<=1)
        {
            cout<<-1<<"\n";
        }
        else{
            if(x%2==0)
            {
                //string 1
                for (int i = 0; i < x / 2; i++)
                {
                  cout << "a";
                }
                for (int i = 0; i < y; i++)
                {
                  cout << "b";
                }
                for (int i = 0; i < x / 2; i++)
                {
                  cout << "a";
                }

                cout<<endl;

                //string 2
                if (y % 2 == 0) //if even
                {
                    for(int i = 0;i<y/2;i++)
                    {
                        cout<<"b";
                    }
                    for(int i = 0;i<x;i++)
                    {
                        cout<<"a";
                    }
                    for(int i = 0;i<y/2;i++)
                    {
                        cout<<"b";
                    }
                    cout<<endl;
                }
                else //if odd
                {
                    for(int i = 0;i<y/2;i++)
                    {
                        cout<<"b";
                    }
                    for (int i = 0; i < x / 2; i++) {
                      cout << "a";
                    }
                    cout << "b";
                    for (int i = 0; i < x / 2; i++) {
                      cout << "a";
                    }
                    for (int i = 0; i < y / 2; i++) {
                      cout << "b";
                    }
                    cout << endl;
                }
            }
            else
            {
                if (y % 2 == 0)
                {
                    for (int i = 0; i < y / 2; i++)
                    {
                      cout << "b";
                    }
                    for (int i = 0; i < x; i++)
                    {
                      cout << "a";
                    }
                    for (int i = 0; i < y / 2; i++)
                    {
                      cout << "b";
                    }

                    cout << endl;
                    for(int i = 0;i<x/2;i++)
                    {
                        cout<<"a";
                    }
                    for (int i = 0; i < y / 2; i++) {
                      cout << "b";
                    }
                    cout << "a";
                    for (int i = 0; i < y / 2; i++) {
                      cout << "b";
                    }
                    for (int i = 0; i < x / 2; i++) {
                      cout << "a";
                    }
                    cout << endl;
                }
            }
        }
    }
    return 0;
}