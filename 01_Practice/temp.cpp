#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
      while (t--) {
        int n;
        cin >> n;
        vector<int> odd;
        vector<int> even;
        for (int i = 0; i < n; i++) {
          int y;
          cin >> y;
          if (y & 1) {
            odd.push_back(y);
          } else {
            even.push_back(y);
          }
        }
        if (odd.size() == n && (n & 1)) {
          cout << -1 << endl;
        } else if (odd.size() == 1 && even.size() > 0) {
          cout << -1 << endl;
        } else if (odd.size() == 1 && even.size() == 0) {
          cout << odd[0] << endl;
        }

        else if (odd.size() >= 2) {
          if (odd.size() & 1) {
          
            cout << odd[0] << " ";

            for (int i = 0; i < even.size(); i++) {
              cout << even[i] << " ";
            }
            for (int i = 1; i < odd.size(); i++) {
              cout << odd[i] << " ";
            }
            cout << endl;
          } else {
            for (int i = 0; i < even.size(); i++) {
              cout << even[i] << " ";
            }
            for (int i = 0; i < odd.size(); i++) {
              cout << odd[i] << " ";
            }
            cout << endl;
          }
        }
}   
    return 0;
}