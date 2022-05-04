#include <iostream>
using namespace std;

int gcd(int a, int b);

int main() {
  int t;
  cin >> t;
  while (t--) {
    int x, y;
    cin >> x >> y;
    cout << y / gcd(x, y) << "\n";
  }
  return 0;
}

int gcd(int a, int b) {
  {
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
  }
}