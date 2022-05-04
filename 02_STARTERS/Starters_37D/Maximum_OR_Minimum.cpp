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
    int x,temp,cnt0 = 0;
    cin>>x;
    int half = x/2;
    loop(i,x)
    {
        cin>>temp;
        if(temp==0)
        {
            cnt0++;
        }
    }
    (cnt0>half)?cout<<0<<"\n":cout<<1<<"\n";
}