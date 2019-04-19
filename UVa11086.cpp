#include <bits/stdc++.h>

using namespace std;

vector <int> prime;
bool status[10000001];
void sieve()
{
    int N=10000001;
	int sq=sqrt(N);
	for(int i=4;i<=N;i+=2)
            status[i]=1;
	for(int i=3;i<=sq;i+=2){
		if(status[i]==0)
		{
			for(int j=i*i;j<=N;j+=i)
                        status[j]=1;
		}
	}
	status[1]=1;
	int k = 0;
	for(int i = 2; i <= N; i++)
      {
            if(status[i] == 0)
            {
                  prime.push_back(i);
            }
      }
}
int NOD(int n)
{
    int index = 0;
    int pf = prime[index];
    int cnt = 0;
    while(pf * pf <= n)
    {
        while(n % pf == 0)
        {
            n = n / pf;
            cnt++;
        }
        index++;
        pf = prime[index];
    }
    if(n != 1)
        cnt++;
    return cnt;
}
int main()
{
    sieve();
    int t;
    while(scanf("%d", &t) != EOF)
    {
        int n, cnt = 0;
        for(int i = 0; i < t; i++)
        {
            scanf("%d", &n);
            if(NOD(n) == 2)
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
