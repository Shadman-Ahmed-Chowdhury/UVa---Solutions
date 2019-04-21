#include <bits/stdc++.h>

using namespace std;

int phi(int n)
{
	int ans = n;

	for(int i=2; i*i<=n; i++)
	{
		if(n%i==0)
		{
			while(n%i==0)
				n = n/i;

			ans = ans - ans/i;
		}
	}
	if(n>1)
	{
		ans = ans - ans/n;
	}
	return ans;
}

int main()
{
    int n;
    int arr[50001] = {0};
    arr[1] = 1;
    for(int i = 2; i < 50001; i++)
        arr[i] = arr[i - 1] + (2 * phi(i));
    while(scanf("%d", &n))
    {
        if(n == 0)
            break;
        printf("%d\n", arr[n]);
    }
    return 0;
}

