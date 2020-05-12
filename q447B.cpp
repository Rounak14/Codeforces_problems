#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int k,fun=0;
	cin>>k;
	int a[26];
	for(int i=0;i<26;i++)
		cin>>a[i];
		
	for(int i=0;i<s.size();i++)
		fun+=a[s[i]-'a']*(i+1);
		
	sort(a,a+26);

	int l=s.size();
	while(k--)
	{
		fun+=(++l)*a[25];
	}
	cout<<fun<<endl;	
}
