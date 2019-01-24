#include <bits/stdc++.h>

using namespace std;
#define ll long long
ll maleBee(ll n, ll M[])
{
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else{
        M[0] = 0;
        M[1] = 1;
        for(ll i = 2; i <= n; i++)
            M[i] = M[i - 1] + M[i - 2] + 1;
        return M[n];
    }
}
int main()
{
    ll n;
    while(1)
    {
        scanf("%lld", &n);
        if(n == -1)
            break;
        ll M[n];
        ll m;
        if(n == 0)
            m = 0;
        else{
            M[n] = {0};
            m = maleBee(n, M);
        }
        //printf("%d\n", m);
        ll f;
        if(n == 0)
            f = 1;
        else if(n == 1)
            f = 1;
        else
            f = M[n - 1] + 1;
        printf("%lld %lld\n", m, m + f);
    }
    return 0;
}

