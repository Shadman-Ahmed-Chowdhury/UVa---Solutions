#include <bits/stdc++.h>

#define LL long long
using namespace std;
vector <LL> prime;
vector <LL> v;
bool status[10000001];
void sieve()
{
    LL N=10000001;
	LL sq=sqrt(N);
	for(LL i=4;i<=N;i+=2)
            status[i]=1;
    prime.push_back(2);
	for(LL i=3;i<=sq;i+=2){
		if(status[i]==0)
		{
			for(LL j=i*i;j<N;j+=2 * i)
                        status[j]=1;
		}
	}
	for(LL i = 3; i <= N; i += 2)
    {
        if(status[i] == 0)
            prime.push_back(i);
    }
}

void primeFactors(LL n)
{
    v.clear();
	for(LL i=0; prime[i] * prime[i] <= n; i++)
	{
		if(n%prime[i] == 0)
		{
			while(n%prime[i] == 0)
			{
				n = n/prime[i];
				v.push_back(prime[i]);
			}
		}
	}
	if(n > 1)
        v.push_back(n);
}

int main()
{
    sieve();
    LL n;
    while(scanf("%lld", &n))
    {
        if(n == 0)
            break;
        if(n < 0)
        {
            printf("%lld = -1 x ", n);
            n = n * (-1);

        }
        else
            printf("%lld = ", n);
        primeFactors(n);
            for(LL i = 0; i < v.size(); i++)
            {
                printf("%lld", v[i]);
                if(i != v.size() - 1)
                    printf(" x ");
            }
            printf("\n");

    }
    return 0;
}

