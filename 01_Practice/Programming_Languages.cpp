#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int features[6];
    for (int i = 0; i < 6; i++) {
      cin >> features[i];
    }
    if ((features[0] == features[2] && features[1] == features[3]) ||
        (features[0] == features[3] && features[1] == features[2])) {
      cout << "1"
           << "\n";
    } else if ((features[0] == features[4] && features[1] == features[5]) ||
               (features[0] == features[5] && features[1] == features[4])) {
      cout << "2"
           << "\n";
    } else {
      cout << "0"
           << "\n";
    }
  }
  return 0;
}