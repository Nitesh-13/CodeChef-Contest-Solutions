#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int num;
        string word;
        cin>>num>>word;
        if(num%2 == 0)
        {
            for(int i = 0;i<num-1;i++)
            {
                swap(word[i],word[i+1]);
                i++;
            }
        }
        else{
            for(int i = 0;i<num-2;i++)
            {
                swap(word[i],word[i+1]);
                i++;
            }
        }
        for(int i = 0;i<num;i++)
        {
            char printWord = 122 - word[i] + 97;
            cout<<printWord;
        }
        cout<<"\n";
    }
    return 0;
}