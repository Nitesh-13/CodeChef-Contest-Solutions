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
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<1;
    }
    else if(n<4)
    {
        cout<<n-1;
    }
    else{
        cout<<n;
    }
    cout<<"\n";
}