#include<bits/stdc++.h>
using namespace std;

int main()
{
  int d,total;
  cin>>d>>total;
  int mini_sum=0,maxi_sum=0;
  int mini[d],maxi[d];
  for(int i=0;i<d;i++)
  {
    cin>>mini[i]>>maxi[i];
    mini_sum+=mini[i];
    maxi_sum+=maxi[i];
  }
  if(total>=mini_sum&&total<=maxi_sum)
  {
    cout<<"YES"<<endl;
    if(total==maxi_sum)
    {
      for(int i=0;i<d-1;i++)
      {
        cout<<maxi[i]<<" ";
      }
      cout<<maxi[d]<<endl;
    }
    else if(total==mini_sum)
    {
      for(int i=0;i<d-1;i++)
      {
        cout<<mini[i]<<" ";
      }
      cout<<mini[d]<<endl;
    }
    else
    {
      
    }
  }
  else
  {
    cout<<"NO"<<endl;
  }
}
