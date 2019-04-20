
#include <bits/stdc++.h>

using namespace std;

#define LL long long

vector <LL> prime;
bool status[1000001];
int pf[1000001];
void sieve()
{
    LL N=1000001;
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

LL numPf(LL n)
{
    LL index = 0;
    LL pf = prime[index];
    LL ans = 0;
    while(pf * pf <= n)
    {
        while(n % pf == 0)
        {
            n /= pf;
            ans++;
        }
        pf = prime[++index];
    }
    if(n != 1)
        ans++;
    return ans;
}
int main()
{
    sieve();
    pf[0] = 0;
    for(LL i = 1; i < 1000001; i++)
    {
        pf[i] = pf[i - 1] + numPf(i);
    }
    LL n;
    while(scanf("%lld", &n) != EOF)
    {
        cout << pf[n] << endl;
    }
    return 0;
}
