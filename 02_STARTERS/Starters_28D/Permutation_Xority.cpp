#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    if (n <= 2)
    {
      cout << "-1" << endl;
      continue;
    }
    else{
        if (n % 2 == 1)
        {
          for (int i = 1; i <= n; i++)
          {
            cout << i << " ";
          }
          cout << "\n";
          continue;
        }
        else{
          for (int i = 1; i <= n - 3; i++)
          {
            cout << i << " ";
          }
          cout << n << " " << n - 2 << " " << n - 1 << "\n";
        }
    }
  }
  return 0;
}