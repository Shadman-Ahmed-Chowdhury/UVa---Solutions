#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, n;
    int arr[1001];
    int ans;
    scanf("%d", &T);
    for(int t = 1; t <= T; t++)
    {
        ans = 0;
        scanf("%d", &n);
        for(int i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        for(int i = 1; i < n; i++)
        {
            int cnt = 0;
            for(int j = i - 1; j >= 0; j--)
            {
                if(arr[i] >= arr[j])
                    cnt++;
            }
            ans = ans + cnt;
        }
        cout << ans << endl;
    }
    return 0;
}

