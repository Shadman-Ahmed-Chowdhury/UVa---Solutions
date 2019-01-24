#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, T = 1;
    while(scanf("%d", &n))
    {
        if(n == 0)
            break;
        int arr[n];
        vector <int> v;
        for(int i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        int sum;
        for(int i = 0; i < n - 1; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                sum = arr[i] + arr[j];
                v.push_back(sum);
            }
        }
        scanf("%d", &m);
        printf("Case %d:\n", T++);
        int d, mn, x;
        for(int i = 0; i < m; i++)
        {
            int q;
            scanf("%d", &q);
            mn = 1e9;
            for(int j = 0; j < v.size(); j++)
            {
                d = abs(q - v[j]);
                if(d < mn)
                {
                    mn = d;
                    x = v[j];
                }
            }
            printf("Closest sum to %d is %d.\n", q, x);
        }
    }
    return 0;
}
