#include <bits/stdc++.h>
using namespace std;

int reverseStr(string& str, int count)
{
	int n = str.length();
	for (int i = 0; i < n / 2; i++)
    {
        swap(str[i], str[n - i - 1]);
        count++;
    }
}

int main()
{
	int t;
    cin>>t;
    while(t--)
    {
        string str;
        int count = 0;
        cin>>str;
	    cout<<reverseStr(str, count)<<"\n";
    }
	return 0;
}
