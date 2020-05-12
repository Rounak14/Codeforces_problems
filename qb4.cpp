#include <bits/stdc++.h>
using namespace std;

long long int P_N_C(long long int n)
{
	if(n<2)
		return 0;
	return (n*(n-1))/2;
}

int main()
{   
    long long int n, m, Kmin, Kmax;
    cin>>n>>m;
    Kmin = (m-n%m)*(P_N_C(n/m))+(n%m)*(P_N_C(n/m+1));
    Kmax = P_N_C(n-m+1);
    cout<<Kmin<<" "<<Kmax<<endl;
    return 0;
}
