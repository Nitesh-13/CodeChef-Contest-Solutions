#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int x;
    cin>>x;
    int coord=(x+1)/2;

    if(x&1)
    {
        coord = coord-2*coord;
    }
    cout<<coord<<endl;
  }
  return 0;
}