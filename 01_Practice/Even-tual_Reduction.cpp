#include <iostream>
#include <string.h>
using namespace std;

void removeDuplicate(char* str)
{
    int index = 0;
    int n = strlen(str);

    for (int i=0; i<n; i++)
    {       
        int j;
        for (j=0; j<i; j++)
            {
                if (str[i] == str[j])
                break;
            }

        if (j == i)
            str[index++] = str[i];
    }
    str[index] = '\0';
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin>>n;
    char s[n];

    for(int i = 0;i<n;i++)
    {
        cin>>s[i];
    }
    removeDuplicate(s);
    for(int i = 0;i<n;i++)
    {
        cout<<s[i];
    }


  }
  return 0;
}
