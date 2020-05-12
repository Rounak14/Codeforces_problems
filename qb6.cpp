#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,x;
	cin>>n;
	vector<int> a;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		a.push_back(x);
	}
	int left=0,right=0;
	for(int i=0;i<n-1;i++)
	{
		if(a[i]>a[i+1])
		{
			left=i;
			break;
		}	
	}
	for(int i=left+1;i<n-1;i++)
	{
		if(a[i]<a[i+1])
		{
			right=i;
			break;
		}
		
	}
	if(right==0)
		right=n-1;
	
	if(is_sorted(a.begin(),a.end()))
	{
		cout<<"yes"<<endl;
		cout<<"1 1"<<endl;
		return 0;
	}	
	else		
		reverse(a.begin()+left,a.begin()+right+1);
	
	if(!is_sorted(a.begin(),a.end()))
		cout<<"no"<<endl;
	else
	{
		cout<<"yes"<<endl;
		cout<<left+1<<" "<<right+1<<endl;
	}
	return 0;	
}
