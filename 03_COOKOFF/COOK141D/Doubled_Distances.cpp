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
    int myArr[x];
    loop(i,x)
    {
        cin>>myArr[i];
    }
    sort(myArr,myArr+x);


    //
    int cnt = 0;
    loop(i,x-1)
    {
        if(2*myArr[i]==myArr[i+1])
        {
            cnt++;
        }
    }
    if(cnt==x-1)
    {
        cout<<"Yes\n";
        return;
    }


    //
    int cn1 = 0;
    loop(i,x-1)
    {
        if(i<2)
        {
            continue;
        }
        else{
            if((myArr[i]-myArr[i-1])==2*(myArr[i+1]-myArr[i]) || 2*(myArr[i]-myArr[i-1])==myArr[i+1]-myArr[i])
            {
                cn1++;
            }
        }
    }
    if(cn1==x-3)
    {
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
    }
}