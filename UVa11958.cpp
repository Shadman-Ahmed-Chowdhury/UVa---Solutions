#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    scanf("%d", &T);
    for(int t = 1; t <= T; t++)
    {
        int n, Hour, Min, Total_Min, total;
        scanf("%d %d:%d", &n, &Hour, &Min);
        int mn = 100000, h, m, c;
        Total_Min = Hour * 60 + Min;
        while(n--)
        {
            scanf("%d:%d %d", &h, &m, &c);
            total = h * 60 + m;
            if(total < Total_Min)
                total += 1440;
            total += c;
            if(mn > total)
                mn = total;
        }
        printf("Case %d: %d\n", t, mn - Total_Min);
    }
    return 0;
}
