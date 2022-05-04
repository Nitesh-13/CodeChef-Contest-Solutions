#include <bits/stdc++.h>
using namespace std;

//#macros
#define ll long long
#define loop(i,n) for(int i = 0;i<n;i++)
#define revloop(i,n) for(int i = n;i>=0;i--)
#define pb push_back

//#global_var_declarations
int sum = 0,min_sum = 0,max_sum = 0;
int min = 0,max = 0,count = 0;
int yes = 0,no = 0;

void solutionCode();
int check(int count);

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solutionCode();
    }
    return 0;
}

//main solution definition
void solutionCode()
{
    string s;
    ll counta = 0,countb = 0;
    cin>>s;
    bool flag = (s[0]=='a')?true:false;
    loop(i,s.length())
    {
        if(s[i]=='a')
        {
            counta++;
            flag = true;
        }
        else if(s[i]=='b')
        {
            countb++;
            flag = false;
        }
        if(flag == false && i>0 && s[i-1]=='a')
        {
            if(check(counta)==0)
            {
                cout<<"NO\n";
                break;
            }
            else{
                counta = 0;
            }
        }
        else if(flag == true && i>0 && s[i-1]=='b')
        {
            if(check(countb)==0)
            {
                cout<<"NO\n";
                break;
            }
            else{
                countb = 0;
            }
        }
        if(i==s.length()-1)
        {
            if(s[i]=='a')
            {
                (check(counta)==0)?cout<<"NO\n":cout<<"YES\n";
            }
            else{
                (check(countb)==0)?cout<<"NO\n":cout<<"YES\n";
            }
        }
    }      
}

int check(int count)
{
    if(count==1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}