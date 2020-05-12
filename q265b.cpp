#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  int timer=0;
  timer+=a[0]+1;
  for(int i=1;i<n;i++)
  {
    timer+=abs(a[i]-a[i-1])+2;
  }
  cout<<timer<<endl;
}
