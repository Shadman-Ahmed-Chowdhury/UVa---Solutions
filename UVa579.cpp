#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m;
	while(1)
	{
	    scanf("%d:%d", &n, &m);
		if(n == 0 && m == 0)
            break;
		double Hour = n * 30 + m * 0.5;
		double Min = m * 6;
		double d = fabs(Hour - Min);
		if(d > 180)
            d = 360 - d;
		printf("%.3lf\n", d);
	}
    return 0;
}
