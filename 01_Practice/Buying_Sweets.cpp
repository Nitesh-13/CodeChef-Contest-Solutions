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
    ll n,r,temp = 1;
    cin>>n>>r;
    ll arr[n],brr[n],crr[n];
    loop(i,n)
    {
        cin>>arr[i];
    }
    loop(i,n)
    {
        cin>>brr[i];
        if(i>0 && brr[0]==brr[i])
        {
            temp++;
        }
    }
    ll min_ele;
    loop(i,n)
    {
        crr[i] = arr[i] - brr[i];
        if(i == 0)
        {
            min_ele = arr[0];
        }
        else{
            if(min_ele>arr[i])
            {
                min_ele = arr[i];
            }
        }
    }
    sort(crr,crr+n);
    ll cnt = 0;
    ll mini_cost = *min_element(arr,arr+n);
    ll mincos = crr[0];
    while(r!=0)
    {
        if(temp == n)
        {
            if(r>=mini_cost)
            {
                cnt++;
                r-=mini_cost;
                r+=brr[0];
            }
            else{
                break;
            }
        }
        else{
            if(r>=min_ele)
            {
                ll j = 1;
                cnt++;
                r-=mincos;
                if(r<mincos)
                {
                    j++;
                    mincos = brr[j];
                }
            }
            else{
                break;
            }
        }
    }
    cout<<cnt<<endl;
}