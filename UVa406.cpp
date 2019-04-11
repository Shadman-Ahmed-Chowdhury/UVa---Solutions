#include <bits/stdc++.h>

using namespace std;


int prime[100001];
bool status[100001];
void sieve()
{
    int N=100000;
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
	prime[k++] = 1;
	for(int i = 2; i <= N; i++)
      {
            if(status[i] == 0)
            {
                  //printf("%d\n", i);
                  prime[k++]  = i;
            }
      }
}
int main()
{
    sieve();
    int n, c, cut, start, cnt;
    while(scanf("%d%d", &n, &c) != EOF)
    {
        if(n == 1)
        {
            printf("%d %d: 1\n", n, c);
            printf("\n");
            continue;
        }
        int i = 0;
        cnt = 0;
        while(prime[i] <= n)
        {
            cnt++;
            i++;
        }
        //cout << cnt << endl;
        if(cnt <= c)
        {
            cut = cnt;
            start = 0;
        }
        else if(cnt & 1)
        {
            cut = (2 * c) - 1;
            if(cut > cnt)
                cut = cnt;
            start = (cnt - cut) / 2;
        }
        else
        {
            cut = 2 * c;
            if(cut > cnt)
                cut = cnt;
            start = (cnt - cut) / 2;
        }
        int k = start;
        printf("%d %d:", n, c);
        for(int j = 0; j < cut; j++)
        {
            if(prime[k] > n)
                break;
            printf(" %d", prime[k++]);
        }
        printf("\n\n");
    }
    return 0;
}
