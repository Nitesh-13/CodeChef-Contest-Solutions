#include <bits/stdc++.h>
#include <sys/time.h>
using namespace std;

void solve();

int main()
{
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);
    solve();
    clock_gettime(CLOCK_MONOTONIC, &end);
    double time_taken;
    time_taken = (end.tv_sec - start.tv_sec) * 1e9;
    time_taken = (time_taken + (end.tv_nsec - start.tv_nsec)) * 1e-9;
  
    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(9);
    cout << " sec" << endl;
    return 0;
}

void solve()
{
    int t;
    cin>>t;
    while(t--)
    {
        int size,sum = 0;
        bool found = false;
        cin>>size;
        int myArr[size];
        for(int i = 0;i<size;i++)
        {
            cin>>myArr[i];
            if(i>0){
                sum+=myArr[i]*myArr[i-1];
            }
        }
        if(sum%2!=0)
        {
            for(int i = 0;i<size;i++)
            {
                cout<<myArr[i]<<" ";
            }
            cout<<endl;
            continue;
        }
        sum = 0;
        sort(myArr,myArr+size);

        do{
            for(int i = 0;i<size-1;i++)
            {
                sum += myArr[i]*myArr[i+1];
            }
            if(sum%2!=0)
            {
                found = true;
                break;
            }
            sum = 0;
        }while(next_permutation(myArr, myArr + size));

        if(found == true)
        {
            for(int i = 0;i<size;i++)
            {
                cout<<myArr[i]<<" ";
            }
            cout<<"\n";
        }
        else{
            cout<<"-1\n";
        }
    }
}