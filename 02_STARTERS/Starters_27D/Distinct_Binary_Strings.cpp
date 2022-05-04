#include <iostream>
#include <string>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    string binStr;
    cin >> n >> binStr;
    int count = 1;
    for (int i = 1; i < n; i++)
    {
      if (binStr[i - 1] != binStr[i])
      {
        count++;
      }
    }
    cout << count << "\n";
  }
  return 0;
}