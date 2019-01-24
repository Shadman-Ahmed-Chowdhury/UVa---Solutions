#include <bits/stdc++.h> 

using namespace std; 

int phi(int n)
{
  if(n == 1)
    return 0; 
  int ans = n; 
  for(int i = 2; i * i <= n; i++)
  {
    if(n % i == 0)
    {
      while(n % i == 0)
        n = n / i; 
      ans -= ans / i; 
    }
  }
  if(n > 1)
    ans -= ans / n;
  return ans; 
}
int main()
{
  int n; 
  while(scanf("%d", &n))
  {
    if(n == 0)
      break; 
    int ans = phi(n); 
    printf("%d\n", ans); 
  }
  return 0;
}