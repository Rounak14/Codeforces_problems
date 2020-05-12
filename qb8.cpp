#include <bits/stdc++.h>
using namespace std;
#define LIMIT 1000000

long long i, j;
long long prime[LIMIT];

int perfect_square(long long n)
{
    double sqrt_n = sqrt(n);
    if(sqrt_n == int(sqrt_n))
        return 1;
    return 0;
}

void Prime_flag()
{
    prime[0] = prime[1] = 1;
    for(i=2;i<LIMIT;i++)
    {
        if (prime[i]==0)
        {
            for(j=i*i;j<LIMIT;j+=i)
            {
                prime[j] = 1;
            }
        }
    }
}

int main(){
    Prime_flag();
    long long n,numbers;
    cin>>numbers;
    for(i=0;i<numbers;i++)
    {
        cin>>n;
        if (n==4)
            cout<<"YES"<<endl;
        else if (n%2==0)
            cout<<"NO"<<endl;
        else if(perfect_square(n)==1 && prime[int(sqrt(n))]==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
