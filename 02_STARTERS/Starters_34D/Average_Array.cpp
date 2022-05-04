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
        int myArr[x];
        if(x%2==0)
        {
            for(int i = 0;i<x;i++)
            {
                if(i<=(x/2)-1)
                {
                    myArr[i] = y-((x/2)-i);
                }
                else{
                    myArr[i] = y+(i-(x/2))+1;
                }
            }
        }   
        else{
            for(int i = 0;i<x;i++)
            {
                if(i<=(x/2)-1)
                {
                    myArr[i] = y-((x/2)-i);
                }
                else{
                    myArr[i] = y+(i-(x/2));
                }
            }
        }
        for(int i = 0;i<x;i++)
        {
            cout<<myArr[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}