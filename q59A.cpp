#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int count=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]>='a'&&s[i]<='z')
			count++;	
		else
			count--;
	}
	if(count>=0)
	{
		for(int i=0;i<s.size();i++)
			s[i]=tolower(s[i]);	
	}
	else
	{
		for(int i=0;i<s.size();i++)
			s[i]=toupper(s[i]);	
	}
	cout<<s<<endl;

}
