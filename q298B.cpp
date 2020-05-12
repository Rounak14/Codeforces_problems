#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
  ll t,sx,sy,ex,ey;
  cin>>t>>sx>>sy>>ex>>ey;

  string s;
  cin>> s;

  ll x_d,y_d;
  x_d=ex-sx;
  y_d=ey-sy;
  ll sneed=0,nneed=0,eneed=0,wneed=0,sou=0,nor=0,eas=0,wes=0;
  if(x_d>=0)
  {
    eneed=x_d;
  }
  else
  {
    wneed=abs(x_d);
  }
  if(y_d>=0)
  {
    nneed=y_d;
  }
  else
  {
    sneed=abs(y_d);
  }
  for(ll i=0;i<t;i++)
  {
    if(s[i]=='S'&&sou<sneed)
      sou++;
    if(s[i]=='N'&&nor<nneed)
      nor++;
    if(s[i]=='E'&&eas<eneed)
      eas++;
    if(s[i]=='W'&&wes<wneed)
        wes++;
    if(sneed==sou&&wneed==wes&&nneed==nor&&eneed==eas)
    {
      cout<<i+1<<endl;
      return 0;
    }
  }
  cout<<"-1"<<endl;

}
