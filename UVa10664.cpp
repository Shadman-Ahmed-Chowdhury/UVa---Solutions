#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m;
    string line;

    cin >> m;
    getchar();
    while(m--)
    {
        getline(cin, line);
        istringstream iss(line);
        int val;
        int arr[21] = {0};
        int dp[201] = {0};
        int k = 0, sum = 0;
        while(iss >> val)
        {
            arr[k++] = val;
            sum = sum + val;
        }
        if(sum % 2 == 1)
        {
            printf("NO\n");
        }
        else
        {
            int d = sum / 2;
            dp[0] = 1;
            for(int i = 0; i < k; i++)
            {
                for(int j = sum; j >= arr[i]; j--)
                {
                    if(dp[j - arr[i]])
                        dp[j] = 1;
                }
            }
            if(dp[d] == 1)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }
    return 0;
}

