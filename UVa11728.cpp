#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[1001] = {0};
    for(int i = 1; i <= 1000; i++)
    {
        int sum = 0;
        for(int j = 1; j * j <= i; j++)
        {
            if(i % j == 0)
            {
                sum += j;
                if(i / j != j)
                    sum += (i / j);
            }
        }
        if(sum <= 1000)
            arr[sum] = i;
    }
    int s, t = 1;
    while(scanf("%d", &s))
    {
        if(s == 0)
            break;
        if(arr[s] == 0)
            printf("Case %d: %d\n", t++, -1);
        else
            printf("Case %d: %d\n", t++, arr[s]);
    }
}

