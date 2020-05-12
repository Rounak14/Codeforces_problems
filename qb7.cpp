#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,M;
	string A;
	cin>>n>>m;
	M=m;
	vector<string> a,b;
	while(M--)
	{
		
		cin>>A;
		a.push_back(A);
		cin>>A;
		b.push_back(A);
	}
	vector<string> c;
	for(int i=0;i<n;i++)
	{
		cin>>A;
		c.push_back(A);
	}
	int j;
	for(int i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(c[i]==a[j])
				break;	
		}
		if(a[j].size()<=b[j].size())
			cout<<a[j]<<" ";
		else
			cout<<b[j]<<" ";		
	}
	cout<<endl;
	return 0;
	
}
