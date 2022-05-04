#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, p, x, y, mins = 0;
    cin >> n >> p >> x >> y;
    int myArr[n];
    for (int i = 0; i < n; i++) {
      cin >> myArr[i];
    }
    for (int i = 0; i < p; i++) {
      mins = (myArr[i] == 0) ? mins + x : mins + y;
    }
    cout << mins << "\n";
  }
  return 0;
}