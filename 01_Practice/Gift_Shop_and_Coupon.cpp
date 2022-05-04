#include <iostream>
#include <algorithm>
#include <cmath>    
using namespace std;

int main() {
  int t;
  cin>>t;
  while (t--)
  {
    int n,k;
    cin>>n>>k;
    int myArr[n];
    int count = 0,sum = 0;
    for(int i = 0;i<n;i++)
    {
      cin>>myArr[i];
      sum+=myArr[i];
    }
    if(sum==k)
    {
        cout<<n<<"\n";
    }
    sort(myArr, myArr + n);
    sum = 0;
    for(int i = 0;i<n;i++)
    {
        sum+=myArr[i];
        if(sum<=k)
        {
            count++;
        }
        else if(sum-myArr[i]+round(myArr[i]/2)<=k)
        {
            count++;
        }
        else{
            break;
        }
    }
    cout << count << endl;
  }

  return 0;
}