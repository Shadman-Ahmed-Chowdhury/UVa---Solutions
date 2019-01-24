#include <bits/stdc++.h> 

using namespace std; 

long long bigmod(long long a, long long b, long long M)
{
  if(b == 0)
    return 1 % M; 
  long long x = bigmod(a, b / 2, M); 
  x = (x * x) % M; 
  if(b % 2 == 1)
    x = (x * a) % M; 
  return x; 
}
int main()
{
  long long B, P, M; 
  while(scanf("%lld%lld%lld", &B, &P, &M) != EOF)
  {
    long long ans = bigmod(B, P, M); 
    cout << ans << endl; 
  }
  return 0; 
}