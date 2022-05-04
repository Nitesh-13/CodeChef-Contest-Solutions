#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int noPpl, totalMoney;
    cin >> noPpl >> totalMoney;
    int arr[noPpl];
    int arr2[noPpl];
    for (int i = 0; i < noPpl; i++) {
      cin >> arr[i];
      if (arr[i] <= totalMoney) {
        totalMoney -= arr[i];
        arr2[i] = 1;
      } else {
        arr2[i] = 0;
      }
    }
    for (auto i : arr2) {
      cout << i;
    }
    cout << "\n";
  }
  return 0;
}