#include <bits/stdc++.h>

using namespace std;

#define LL long long

vector <LL> prime;
bool status[10000001];
void sieve()
{
    LL N=10000001;
	LL sq=sqrt(N);
	for(LL i=4;i<=N;i+=2)
            status[i]=1;
	for(LL i=3;i<=sq;i+=2){
		if(status[i]==0)
		{
			for(LL j=i*i;j<=N;j+=i)
                        status[j]=1;
		}
	}
	status[1]=1;
	LL k = 0;
	for(LL i = 2; i <= N; i++)
      {
            if(status[i] == 0)
            {
                  //printf("%d\n", i);
                  prime.push_back(i);
            }
      }
}
LL phi(LL n)
{
	LL ans = n;

	for(LL i=2; i*i<=n; i++)
	{
		if(n%i==0)
		{
			while(n%i==0)
				n = n/i;

			ans = ans - ans/i;
		}
	}
	if(n>1)
	{
		ans = ans - ans/n;
	}
	return ans;
}
LL numDiv(LL n)
{
    LL index = 0;
    LL pf = prime[index];
    LL ans = 1;
    while(pf * pf <= n)
    {
        LL power = 0;
        while(n % pf == 0)
        {
            n /= pf;
            power++;
        }
        ans *= (power + 1);
        pf = prime[++index];
    }
    if(n != 1)
        ans *= 2;
    return ans - 1;
}
int main()
{
    sieve();
    LL n;
    while(scanf("%lld", &n) != EOF)
    {
        LL ans = n - phi(n) - numDiv(n);
        if(ans < 0)
            ans = 0;
        cout << ans << endl;
    }
    return 0;
}
