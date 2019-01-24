#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, n;
    while(scanf("%d", &m))
    {
        if(m == 0)
            break;
        n = m;
        while(1)
        {
            int temp = n;
            if(temp == 1)
                break;
            if(temp % 2 == 0 || temp % 3 == 0)
            {
                for(int i = 2; i <= 3; i++)
                {
                    if(temp % i == 0)
                    {
                        while(temp % i == 0)
                            temp = temp / i;
                    }
                }
                if(temp == 1)
                    break;
            }
            n++;
        }
        printf("%d\n", n);
    }
    return 0;
}
