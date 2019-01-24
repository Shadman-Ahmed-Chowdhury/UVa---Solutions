#include <bits/stdc++.h>

using namespace std;
long long Fib[52];
void fibonacci()
{
  Fib[0] = 1;
  Fib[1] = 2;
  for(int i = 2; i <= 52; i++)
  {
    Fib[i] = Fib[i-1] + Fib[i-2];
  }
}
int main()
{
  fibonacci();
  int t, T, n;
  scanf("%d", &T);
  for(t = 1; t <= T; t++)
  {
    scanf("%d", &n);
    printf("Scenario #%d:\n%lld\n\n", t, Fib[n]);
  }

  return 0;
}
