#include<bits/stdc++.h>
using namespace std;

int solve(int A, int B,int k) 
{ 
    int count = 0; 
    for (int i = 0; i < 32; i++) { 
        if (((A >> i) & 1) != ((B >> i) & 1)) { 
            count++; 
        } 
    } 
  	if(count<=k)
  		return 1;
  	return 0;	 
} 

int main()
{
	int n,m,k,cnt=0;
	cin>>n>>m>>k;
	int b[m+1];
	for(int i=0;i<=m;i++)
	{
		cin>>b[i];
	}
	for(int i=0;i<m;i++)
	{
		cnt+=solve(b[i],b[m],k);
	}
	cout<<cnt<<endl;
}
