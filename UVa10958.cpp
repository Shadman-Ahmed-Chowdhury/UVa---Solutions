#include <bits/stdc++.h>

using namespace std;
#define ll long long
vector <ll> prime;
bool status[10000001];
void sieve()
{
    ll N = 10000001;
	ll sq=sqrt(N);
	for(ll i=4;i<=N;i+=2)
            status[i]=1;
	for(ll i=3;i<=sq;i+=2){
		if(status[i]==0)
		{
			for(ll j=i*i;j<=N;j+=i)
                status[j]=1;
		}
	}
	status[1]=1;
	for(ll i = 2; i <= N; i++)
      {
            if(status[i] == 0)
            {
                  prime.push_back(i);
            }
      }
}

ll numDiv(ll n)
{
    ll index = 0;
    ll pf = prime[index];
    ll ans = 1;
    while(pf * pf <= n)
    {
        ll power = 0;
        while(n % pf == 0)
        {
            n = n / pf;
            power++;
        }
        ans *= (power + 1);
        pf = prime[++index];
    }
    if(n != 1)
        ans *= 2;
    return ans;
}

int main()
{
    sieve();
    ll m, n, p, t = 1;
    while(scanf("%lld%lld%lld", &m, &n, &p))
    {
        if(m == 0 && n == 0 && p == 0)
            break;
        if(m < 0)
            m *= (-1);
        if(n < 0)
            n *= (-1);
        if(p < 0)
            p *= (-1);
        ll ans = 2 * numDiv(m * n * p * p) - 1;
        printf("Case %lld: %lld\n", t++, ans);
    }
    return 0;
}

