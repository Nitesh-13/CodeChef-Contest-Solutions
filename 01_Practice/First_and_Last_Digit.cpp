#include <iostream>
using namespace std;

int main() {

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int x = n % 10;
    while (n > 9) {
      n = n / 10;
    }
    cout << n + x << "\n";
  }

  return 0;
}
