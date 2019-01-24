#include <bits/stdc++.h>

using namespace std;

void solution(long long num)
{
    if(num >= 10000000)
    {
        solution(num / 10000000);
        printf(" kuti");
        num = num % 10000000;
    }
    if(num >= 100000)
    {
        solution(num / 100000);
        printf(" lakh");
        num = num % 100000;
    }
    if(num >= 1000)
    {
        solution(num / 1000);
        printf(" hajar");
        num = num % 1000;
    }
    if(num >= 100)
    {
        solution(num / 100);
        printf(" shata");
        num = num % 100;
    }
    if(num)
    {
        printf(" %lld", num);
    }
}

int main()
{
    long long n;
    int T = 1;
    while(scanf("%lld", &n) != EOF)
    {
        printf("%4d.", T++);
        if(n == 0)
        {
            printf(" 0\n");
            continue;
        }

        solution(n);
        printf("\n");
    }
    return 0;
}
