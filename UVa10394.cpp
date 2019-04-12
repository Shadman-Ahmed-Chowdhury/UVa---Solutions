#include <bits/stdc++.h>

using namespace std;

vector <long long> prime;
bool status[20000001];
void sieve()
{
    int N = 20000001;
	for(long long i=2;i<=N;i++){
		if(status[i]==0)
		{
			for(long long j=i*i;j<=N;j+=i)
                status[j]=1;
            prime.push_back(i);
		}
	}
}

int main()
{
    sieve();
    vector <pair <long long, long long> > v;
    for(int i = 0; i < prime.size() - 1; i++)
    {
        if(prime[i + 1] - prime[i] == 2)
            v.push_back({prime[i], prime[i + 1]});
        if(v.size() >= 100000)
            break;
    }
    int s;

    while(scanf("%d", &s) != EOF)
    {
        cout << "(" << v[s - 1].first << ", " << v[s - 1].second << ")" << endl;
    }
    return 0;
}
