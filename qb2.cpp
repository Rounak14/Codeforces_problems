#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	int a[m];
	long long int time=0;
	for(int i=0;i<m;i++)
	{
		cin>>a[i];
	}
	time=(long long int)(a[0]-1);
	for(int i=0;i<m-1;i++)
	{
		if(a[i]<=a[i+1])
		{
			time+=(long long int)(a[i+1]-a[i]);
		}
		else
		{
			time+=(long long int)(a[i+1]-a[i]+n);
		}
	}
	cout<<time<<endl;
}
