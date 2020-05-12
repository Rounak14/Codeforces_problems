#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n,l;
	cin>>n>>l;
	vector<int> a;
	for(long long int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		a.push_back(x);
	}
	sort(a.begin(),a.end());
	long long int diff=INT_MIN;
	for(long long int i=0;i<n-1;i++)
	{
		if(a[i+1]-a[i]>diff)
		{
			diff=a[i+1]-a[i];
		}
	}
	long long int ext_max=max((int)(a[0]),(int)(l-a[n-1]));
	if(double(diff)/2.0>=ext_max)
	{
		cout<<fixed;
		cout.precision(9);
		cout<<double(diff)/2.0<<endl;
	}
	else
	{
		cout<<fixed;
		cout.precision(9);
		cout<<double(ext_max)<<endl;
	}
	return 0;
}	
