///UVa 686
#include <bits/stdc++.h>

using namespace std;

vector <int> prime;
bool status[40001];
void sieve()
{
    int N = 40001;
	for(int i=2;i<=N;i++){
		if(status[i]==0)
		{
			for(int j=i*i;j<=N;j+=i)
                status[j]=1;
            prime.push_back(i);
		}
	}
}

int main()
{
    sieve();
    int n;
    while(1)
    {
        scanf("%d", &n);
        if(n == 0)
            break;
        int cnt = 0;
        for(int i = 0; i < prime.size(); i++)
        {
            int x = prime[i];
            int y = n - prime[i];
            if(x > y)
                break;
            if(status[x] == 0 && status[y] == 0)
            {
                cnt++;
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}

