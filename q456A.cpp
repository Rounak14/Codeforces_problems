#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
  ll n;
  cin>>n;
  ll a,b;
  vector<pair<ll,ll>>p;
  for(int i=0;i<n;i++)
  {
    cin>>a>>b;
    p.push_back({b,a});
  }
  sort(p.begin(),p.end());
  int flag=0;
  for(int i=1;i<n;i++)
  {
    if(p[i].second<p[i-1].second)
    {
      flag=1;
      break;
    }
  }
  if(flag==1)
    cout<<"Happy Alex"<<endl;
  else
    cout<<"Poor Alex"<<endl;
}
