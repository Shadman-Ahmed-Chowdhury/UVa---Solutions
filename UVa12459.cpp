#include <bits/stdc++.h>

using namespace std;
long long fib[101];
void fibonacci()
{
    fib[0] = 1;
    fib[1] = 1;
    for(int i = 2; i < 81; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }
}
int main()
{
    fibonacci();
    int n;
    while(1)
    {
      scanf("%d", &n);
      if(n == 0)
      {
            break;
      }
      printf("%lld\n", fib[n]);
    }
    return 0;
}
