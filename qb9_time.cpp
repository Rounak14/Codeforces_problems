#include<bits/stdc++.h>
using namespace std;


int even(string s,int l)
{
	for(int i=0;i<l;i++)
	{
		if((s[i]-'0')%2==0)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	string s;
	cin>>s;
	int l=s.size();
	if(even(s,l)==0)
	{
		cout<<"-1"<<endl;
		return 0;
	}	
	vector<string> st;
	for(int i=0;i<l;i++)
	{
		string str;
		str=s;
		if((s[i]-'0')%2==0)
		{
			swap(str[i],str[l-1]);
			st.push_back(str);
		}
	}
	sort(st.begin(),st.end());
	cout<<st[st.size()-1]<<endl;	
}
