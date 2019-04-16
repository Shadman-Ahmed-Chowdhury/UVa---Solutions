#include <bits/stdc++.h>
#define LL long long
using namespace std;
int N = 32767;
vector <int> prime;
vector <pair<int, int> > v[32767];
int status[32767];
bool cmp(const pair< int, int> &a, const pair <int, int> &b)
{
    return a.first > b.first;
}
int mod(int a, int b)
{
    if(b == 1)
        return a;
    int x = mod(a, b / 2);
    x = (x * x);
    if(b & 1)
        x = x * a;
    return x;
}
void sieve()
{
	int sq=sqrt(N);
	for(int i=4;i<=N;i+=2)
            status[i]=1;
    prime.push_back(2);
	for(int i=3;i<=sq;i+=2){
		if(status[i]==0)
		{
			for(int j=i*i;j<N;j+=2 * i)
                status[j]=1;
		}
	}
	for(int i = 3; i <= N; i += 2){
        if(status[i] == 0)
            prime.push_back(i);
    }
}
void primeFactors()
{
    for(int j = 2; j < N; j++)
    {
        int n = j;
        for(int i=0; prime[i] * prime[i] <= j; i++)
        {
            if(n%prime[i] == 0)
            {
                int cnt = 0;
                while(n%prime[i] == 0)
                {
                    n = n/prime[i];
                    cnt++;
                }
                v[j].push_back({prime[i], cnt});
            }
        }
        if(n > 1)
            v[j].push_back({n, 1});
        sort(v[j].begin(), v[j].end(), cmp);
    }
}
int main()
{
    sieve();
    primeFactors();
    string str;
    int n, a, b;
    while(1)
    {
        getline(cin, str);
        if(str[0] == '0')
            break;
        int x;
        int arr[100];
        int j = 0;
        stringstream ss(str);
        while(ss >> x)
        {
            arr[j++] = x;
        }
        n = 1;
        for(int i = 0; i < j; i += 2)
        {
            a = arr[i];
            b = arr[i + 1];
            int p = mod(a, b);
            n = n * p;
        }
        n--;
        for(int i = 0; i < v[n].size(); i++)
        {
            if(i == v[n].size() - 1)
                cout << v[n][i].first << " " << v[n][i].second << endl;
            else
                cout << v[n][i].first << " " << v[n][i].second << " ";
        }
    }
    return 0;
}

