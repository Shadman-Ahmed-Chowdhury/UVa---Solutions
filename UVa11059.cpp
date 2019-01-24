#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t = 1, n ;
    int arr[18];
    while(scanf("%d", &n)!= EOF)
    {
        for(int i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        long long product = 1, mx = 0;
        for(int i = 0; i < n; i++)
        {
            product = 1;
            product *= arr[i];
            mx = max(mx, product); 
            for(int j = i + 1; j < n; j++)
            {
                if(arr[j] != 0)
                {
                    product *= arr[j];
                    mx = max(mx, product);
                }
                else
                    break;
            }
        }
        printf("Case #%d: The maximum product is %lld.\n", t++, mx);
        cout << endl; 
    }
    return 0;
}
