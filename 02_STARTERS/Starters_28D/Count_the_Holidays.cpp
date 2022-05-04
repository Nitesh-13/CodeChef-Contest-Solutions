#include <iostream>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,same = 0;
        cin>>n;
        int myArr[n];
        for(int i = 0;i<n;i++)
        {
            cin>>myArr[i];
        }
        int myArr2[8]{6,7,13,14,20,21,27,28};
        for(int i = 0;i<n;i++)
        {
            
            for(int j = 0;j<8;j++)
            {
                if(myArr[i]==myArr2[j])
                {
                    same++;
                }
            }
        }
        cout<<8+(n-same)<<"\n";
 
    }
    return 0;
}