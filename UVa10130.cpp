#include <bits/stdc++.h>

using namespace std;

int main()
{
      int dp[50] = {0};
      int n, m, T;
      scanf("%d", &T);
      for(int t = 1; t <= T; t++)
      {
            scanf("%d", &n);
            memset(dp, 0, sizeof(dp));
            for(int i = 0; i < n; i++)
            {
                  int value, weight;
                  scanf("%d%d", &value, &weight);
                  for(int j = 30; j >= weight; j--)
                  {
                        if(dp[j - weight] + value > dp[j])
                        {
                              dp[j] = dp[j - weight] + value;
                        }
                  }
            }
            int p, w, ans = 0;
            scanf("%d", &p);
            for(int i = 0;  i < p; i++)
            {
                  scanf("%d", &w);
                  ans = ans + dp[w];
            }
            printf("%d\n", ans);
      }
      return 0;
}
