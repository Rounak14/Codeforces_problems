#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
  ll n;
  cin>>n;
  ll a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];

  sort(a,a+n);
  int flag=0;
  for(int i=0;i<n;i++)
  {
    if(a[i]!=i+1)
    {
      cout<<i+1<<endl;
      flag=1;
      break;
    }
  }
  if(flag==0)
  {
    cout<<n+1<<endl;
  }
  return 0;

}
