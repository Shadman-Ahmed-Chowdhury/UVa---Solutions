#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, i, cnt, sq;
    while(1)
    {
        scanf("%d%d", &a, &b);
        if(a == 0 && b == 0)
            break;
        cnt = 0;
        for(i = a; i <= b; i++)
        {
           sq = sqrt(i);
           if(sq * sq == i)
            cnt++;
        }
        printf("%d\n",cnt);
    }
    return 0;
}
