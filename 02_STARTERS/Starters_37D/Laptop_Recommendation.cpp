#include <bits/stdc++.h>
using namespace std;

//#macros
#define ll long long
#define loop(i, n) for (ll i = 0; i < n; i++)
#define revloop(i, n) for (ll i = n; i >= 0; i--)
#define pb push_back

void solutionCode();

int main() {
  ll t;
  cin >> t;
  while (t--) {
    solutionCode();
  }
  return 0;
}

// main solution definition
void solutionCode() {
    int x;
    cin>>x;
    int myArr[10] = {0,0,0,0,0,0,0,0,0,0};
    int temp1,temp2 = 0,max = 0,index = 0;
    loop(i,x)
    {
        cin>>temp1;
        temp2 = myArr[temp1-1];
        temp2++;
        myArr[temp1-1] = temp2;
        if(max<=myArr[temp1-1])
        {
            max = myArr[temp1-1];
            index = temp1-1;
        }
    }
    int cnt = 0;
    loop(i,10)
    {
        if(myArr[i]==max)
        {
            cnt++;
        }
    }
    (cnt>1)?cout<<"CONFUSED\n":cout<<index+1<<"\n";
}