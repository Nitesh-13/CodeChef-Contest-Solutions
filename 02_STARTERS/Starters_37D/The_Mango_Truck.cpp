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
    int x,y,z;
    cin>>x>>y>>z;
    (y>=z)?cout<<0<<"\n":cout<<(z-y)/x<<"\n";
}