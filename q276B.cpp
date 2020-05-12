#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
  string s;
  cin>>s;
  map<char,ll>mp;
  for(ll i=0;i<s.size();i++)
  {
    mp[s[i]]++;
  }
  int count=0;
    for(auto it=mp.begin();it!=mp.end();it++)
    {
      if(it->second%2==1)
      {
        count++;
      }
    }
    if(count==0)
    {
      cout<<"First"<<endl;
      return 0;
    }
    if(count%2==0)
    {
      cout<<"Second"<<endl;
    }
    else
    {
      cout<<"First"<<endl;
    }


}
