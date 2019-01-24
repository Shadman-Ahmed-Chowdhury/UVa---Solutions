#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, n, a, flag, d, sum;
    int arr[16], temp[16];
    scanf("%d", &T);
    for(int t = 1; t <= T; t++)
    {
        flag = 0, sum = 0;
        scanf("%d",&n);
        for(int j = 0; j < n; j++)
            scanf("%d", &arr[j]);

        for(int i = 0; i < 1001; i++)
        {
            sum = 0;
            for(int j = 0; j < n; j++)
                sum = sum + arr[j];
            if(sum == 0)
            {
                flag = 1;
                break;
            }
            for(int j = 0; j < n; j++)
            {
                if(j == n - 1)
                    temp[j] = abs(arr[j] - arr[0]);
                else
                    temp[j] = abs(arr[j] - arr[j + 1]);
            }
            for(int j = 0; j < n; j++)
                arr[j] = temp[j];
        }
        if(flag == 0)
            printf("LOOP\n");
        else
            printf("ZERO\n");
    }
    return 0;
}
