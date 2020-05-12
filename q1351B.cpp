#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
    ll a1,b1,a2,b2;
    cin>>a1>>b1>>a2>>b2;
    if(a1<b1)
    {
      ll temp=b1;
      b1=a1;
      a1=temp;
    }
    if(a2<b2)
    {
      ll temp=b2;
      b2=a2;
      a2=temp;;
    }
    if(a1==a2)
    {
      if(b1+b2==a1)
      {
        cout<<"Yes"<<endl;
        continue;
      }
      else
      {
        cout<<"No"<<endl;
        continue;
      }
    }
    if(a1==b2)
    {
      if(b1+a2==a1)
      {
        cout<<"Yes"<<endl;
        continue;
      }
      else
      {
        cout<<"No"<<endl;
        continue;
      }
    }
    if(b1==a2)
    {
      if(a1+b2==b1)
      {
        cout<<"Yes"<<endl;
        continue;
      }
      else
      {
        cout<<"No"<<endl;
        continue;
      }
    }
    if(b1==b2)
    {
      if(a1+a2==b1)
      {
        cout<<"Yes"<<endl;
        continue;
      }
      else
      {
        cout<<"No"<<endl;
        continue;
      }
    }
    cout<<"No"<<endl;
  }



}
