#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,s,t;
  cin>>n>>s>>t;
  int a[n+1];
  for(int i=1;i<=n;i++)
  {
    cin>>a[i];
  }
  int move=0;
  int i=s;
  while(1)
  {
    if(i==s&&a[i]==t)
    {
      if(s==t)
      {
        cout<<0<<endl;
      }
      else
      {
        cout<<1<<endl;
      }
      break;
    }
    else if(i==t)
    {
      cout<<move<<endl;
      break;
    }
    i=a[i];
    move++;
    if(i==s)
    {
      cout<<"-1"<<endl;
      break;
    }
  }


}
