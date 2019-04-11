#include <bits/stdc++.h>

using namespace std;

#define LL long long
int main()
{
    LL n, a, b, x, cnt, mx;
    scanf("%lld", &n);
    for(LL t = 0; t < n; t++)
    {
        scanf("%lld%lld", &a, &b);
        mx = -1;
        for(LL i = a; i <= b; i++)
        {
            cnt = 0;
            LL sq = sqrt(i);
            for(LL j = 1; j <= sq; j++)
            {
                if(i % j == 0)
                {
                    cnt++;
                    if(i / j != j)
                        cnt++;
                }
            }
            if(cnt > mx)
                mx = cnt, x = i;
        }
        printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n", a, b, x, mx);

    }
    return 0;
}

