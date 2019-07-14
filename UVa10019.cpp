#include <bits/stdc++.h>

using namespace std;

int countOnes(int n)
{
    int x = n, cnt = 0;
    if(n == 1 || n == 2 || n == 4)
        return 1;
    else if(n == 3 || n == 5 || n == 6)
        return 2;
    else if(n == 7)
        return 3;
    while(n != 0)
    {
        cnt += (n % 2);
        n = n / 2;
    }
    return cnt;
}

int main()
{
    int N, M, a, b, n;
    scanf("%d", &N);
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &M);
        a = countOnes(M);
        b = 0;
        while(M != 0)
        {
            n = M % 10;
            b += countOnes(n);
            M = M / 10;
        }
        printf("%d %d\n", a, b);
    }
    return 0;
}
