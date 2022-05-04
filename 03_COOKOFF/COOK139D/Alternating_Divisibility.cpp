#include<iostream>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int myArr[n];
    int temp = 1;
    if(n==1)
    {
      cout<<"2\n";
    }
    else{
      for(int i =0 ;i<n-1;i+=2)
      {
        myArr[i] = temp;
        myArr[i+1] = temp*2;
        temp += 2;
      }
      if(n%2!=0)
      {
        myArr[n-1] = myArr[n-2]+1;
      }
      for(int i = 0;i<n;i++)
      {
        cout<<myArr[i]<<" ";
      }
      cout<<"\n";
    }
  } 
  return 0;
}