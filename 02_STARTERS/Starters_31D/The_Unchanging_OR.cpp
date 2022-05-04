#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, dist, temp;
        cin>>n;
        int count = 0;
        while(true)
        {
            count++;
            int temp2 = (1<<count);
            if(temp2&n)
            {
                dist = count;
                temp = temp2;
            }
            if(count>=31)
            {
                break;
            }
        }
        int result = 0,num = 1;
        for(int i=0;i<dist;i++)
        {
            result += (num-1);
            num*=2;
        }
        result += (n-temp);
        cout<<result<<endl;
    }
    return 0;
}