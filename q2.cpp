#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
	int n;
	cin>>n;
	string s;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		if(s.size()<=10)
		{
			cout<<s<<endl;
			continue;
		}
		int count=s.size()-2;
		cout<<s[0]<<count<<s[s.size()-1]<<endl;
	}
	return 0;
}
