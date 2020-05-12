#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
    string s;
    cin>>s;
    ll x=0,y=0;
    set<pair<pair<int,int>,pair<int,int>>>set;
    pair<int,int> p={0,0},tmp={0,0};
    ll cost=0;
    for(int i=0;s[i];i++)
    {
      if(s[i]=='N')
      {
        y++;
      }
      else if(s[i]=='S')
      {
        y--;
      }
      else if(s[i]=='E')
      {
        x++;
      }
      else
      {
        x--;
      }
      p=tmp;
      tmp={x,y};
      pair<pair<int,int>,pair<int,int>> temp={p,tmp};
      pair<pair<int,int>,pair<int,int>> temp_rev={tmp,p};
      if(set.find(temp)==set.end()&&set.find(temp_rev)==set.end())
      {
        set.insert(temp);
        set.insert(temp_rev);
        cost+=5;
      }
      else
      {
        cost+=1;
      }
      //cout<<"Cost: "<<cost<<endl;
    }
    cout<<cost<<endl;
  }

}
