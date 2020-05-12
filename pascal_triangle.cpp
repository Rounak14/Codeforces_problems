#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<vector<int>> ans;
	vector<int> v;
	v.push_back(1);
	
	ans.push_back(v);
	for(int i=1;i<n;i++)
	{
		vector<int> v;
		v.push_back(1);
		
		for(int j=1;j<i;j++)
		{
			v.push_back(ans[i-1][j]+ans[i-1][j-1]);
		}
		v.push_back(1);
		ans.push_back(v);
	}
	for(int i=0;i<ans.size();i++)
	{
		for(int j=0;j<ans[i].size();j++)
		{
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;

}
