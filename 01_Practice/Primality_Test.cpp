#include <iostream>
using namespace std;

int main() {

  int t;
  cin >> t;
  while (t--){
    int i, n;
    bool primenum = true;
    cin >> n;
    if (n == 0 || n == 1) {
      primenum = false;
    }
    for (i = 2; i <= n / 2; ++i) {
      if (n % i == 0) {
        primenum = false;
        break;
      }
    }

    if (primenum)
      cout <<"yes\n";
    else
      cout <<"no\n";
  }

  return 0;
}
