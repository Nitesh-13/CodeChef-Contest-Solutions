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
    int sum = 0, min_sum = 0, max_sum = 0;
    int mini = 0, maxi = 0, cnt = 0;
    int ya = 0, nop = 0;
    bool flag = true;
    solutionCode();
  }
  return 0;
}

// main solution definition
void solutionCode() {
    ll x,y,z;
    cin>>x>>y>>z;
    if(x==y && y==z)
    {
        cout<<"ANY\n";
    }
    else if(z%y==0 && z%x==0)
    {
        cout<<"ANY\n";
    }
    else if(z%y==0)
    {
        cout<<"DUCK\n";
    }
    else if(z%x==0)
    {
        cout<<"CHICKEN\n";
    }
    else{
        cout<<"NONE\n";
    }
}