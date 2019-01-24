#include <bits/stdc++.h>

using namespace std;

long long ways(long long a,  long long b)
{
    long long ans = 1;
    long long d = a - b;
    d = min(d, b);
    long long i = 1;
    while(i <= d)
    {
        ans = ans * a;
        ans = ans / i++;
        a--;
    }
    return ans;
}
int main()
{
    long long ans, n, m;
    while(scanf("%lld%lld", &n, &m))
    {
        if(n == 0 && m == 0)
            break;
        ans = ways(n, m);
        printf("%lld things taken %lld at a time is %lld exactly.\n", n, m, ans);
    }
    return 0;
}
