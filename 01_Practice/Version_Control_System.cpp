#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int x,y,z, count1 = 0,count2 = 0,a,b;
        cin>>x>>y>>z;
        int arr1[y],arr2[z];
        for(int i = 0;i<y;i++)
        {
            cin>>arr1[i];
        }
        for(int i = 0;i<z;i++)
        {
            cin>>arr2[i];
        }
        if(y<=z)
        {
            for(int i = 0;i<y;i++)
            {
                for(int j = 0;j<z;j++)
                {
                    if(arr1[i]==arr2[j])
                    {
                        count1++;
                    }
                }
            }

            a = abs(y-count1);
            b = abs(z-count1);
            count2 = x-a-b-count1;

        }
        else{
            for(int i = 0;i<z;i++)
            {
                for(int j = 0;j<y;j++)
                {
                    if(arr2[i]==arr1[j])
                    {
                        count1++;
                    }
                }
            }

            a = abs(y-count1);
            b = abs(z-count1);
            count2 = x-a-b-count1;
        }
        cout<<count1<<" "<<count2<<endl;
    }
    return 0;
}