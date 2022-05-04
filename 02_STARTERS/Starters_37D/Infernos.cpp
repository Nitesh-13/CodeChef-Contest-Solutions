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
    int x,y,maxi = 0;
    cin>>x>>y;
    int myArr[x];
    loop(i,x)
    {
        cin>>myArr[i];
        if(maxi<=myArr[i])
        {
            maxi = myArr[i];
        }
    }
    int dmg = 0;
    loop(i,x)
    {
        dmg+=myArr[i]/y;
        if(myArr[i]%y)
        {
            dmg++;
        }
    }
    (maxi>=dmg)?cout<<dmg<<"\n":cout<<maxi<<"\n";
}