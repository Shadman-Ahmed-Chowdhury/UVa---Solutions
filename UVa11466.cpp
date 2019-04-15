#include <bits/stdc++.h>

#define LL long long
using namespace std;
vector <LL> prime;
LL N=10000001;
bool status[10000001];
void sieve()
{
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

LL primeFactors(LL n)
{
    LL a, cnt = 0;
	for(LL i=0; prime[i] * prime[i] <= n; i++)
	{
		if(n%prime[i] == 0)
		{
			while(n%prime[i] == 0)
			{
				n = n/prime[i];
			}
			a = prime[i];
			cnt++;
		}

	}
	if(n > 1)
    {
        a = n;
        cnt++;
    }
    if(cnt > 1)
        return a;
    else
        return -1;
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
            n = n * (-1);
        if(n <= N && status[n] == 0)
            printf("-1\n");
        else
        {
            LL a = primeFactors(n);
            printf("%lld\n", a);
        }
    }
    return 0;
}
