#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int x, y, sumR = 0, sumL = 0;
    string commands;
    cin>>x>>y>>commands;
    int sum = x+1;
    for(int i = 0;i<x;i++)
    {
      (commands[i]=='R')?sumR++:sumL++;
    }
    (sumR == 0 || sumL==0)?cout<<sum<<"\n":cout<<sum - abs(sumR-sumL)<<"\n";
  }
  return 0;
}