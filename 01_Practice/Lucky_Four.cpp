#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--)
  {
    int x;
    cin >> x;
    int result = 0;
    while (x)
    {
      result = result * 10 + x % 10;
      x /= 10;
    }
    cout <<result<<"\n";
  }

  return 0;
}
