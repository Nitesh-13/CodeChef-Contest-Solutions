#include <iostream>
using namespace std;

bool hardnessCheck(int x);
bool carbonCheck(float y);
bool strengthCheck(int z);
int gradeCheck(int x, float y, int z);

int main() {
  int t;
  cin >> t;
  while (t--) {
    int x, z;
    float y;
    cin >> x >> y >> z;
    cout << gradeCheck(x, y, z) << endl;
  }
  return 0;
}

bool hardnessCheck(int x) {
  if (x > 50) {
    return true;
  }
  return false;
}
bool carbonCheck(float y) {
  if (y < 0.7) {
    return true;
  }
  return false;
}
bool strengthCheck(int z) {
  if (z > 5600) {
    return true;
  }
  return false;
}

int gradeCheck(int x, float y, int z) {
  bool a, b, c;
  a = hardnessCheck(x);
  b = carbonCheck(y);
  c = strengthCheck(z);

  if (a == true && b == true && c == true) {
    return 10;
  } else if (a == true && b == true && c == false) {
    return 9;
  } else if (a == false && b == true && c == true) {
    return 8;
  } else if (a == true && b == false && c == true) {
    return 7;
  } else if (a == true || b == true || c == true) {
    return 6;
  } else {
    return 5;
  }
}