#include <iostream>
#include <string>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, b, maxArea = 0;
    cin >> n >> b;
    int width[n];
    int height[n];
    int price[n];
    int area[n];
    for (int i = 0; i < n; i++) {
      cin >> width[i] >> height[i] >> price[i];
      area[i] = width[i] * height[i];
    }
    for (int i = 0; i < n; i++) {
      if (price[i] <= b) {
        if (area[i] > maxArea) {
          maxArea = area[i];
        }
      }
    }
    if (maxArea != 0) {
      cout << maxArea << "\n";
    } else {
      cout << "no tablet\n";
    }
  }
  return 0;
}