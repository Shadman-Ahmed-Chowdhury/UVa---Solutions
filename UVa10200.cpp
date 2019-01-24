#include <bits/stdc++.h> 
#define N 1000000

using namespace std; 

bool status[N]; 
vector <int> prime; 
void sieve()
{
  memset(status, true, sizeof(status));
  status[1] = false; 
  for(int i = 4; i < N; i += 2)
    status[i] = false; 
  for(int i = 3; i * i <= N; i++)
  {
    if(status[i] == true)
    {
      for(int j = i * i; j < N; j += i)
        status[j] = false; 
    }
  }
  prime.push_back(2); 
  for(int i = 3; i < N; i += 2)
  {
    if(status[i] == true)
      prime.push_back(i); 
  }
}
bool isPrime(int n)
{
  if(n < N)
    return status[n]; 
  int i = 0;
  while(prime[i] * prime[i] <= n)
  {
    if(n % prime[i] == 0)
      return false; 
    i++;
  }
  return true; 
}

int main()
{
  int a, b, cnt;
  sieve(); 
  bool flag[10001]; 
  memset(flag, false, sizeof(flag)); 

  for(int i = 0; i <= 10000; i++)
  {
    int n = (i * i) + i + 41; 
    if(isPrime(n))
      flag[i] = true; 
  }
  while(scanf("%d%d", &a, &b) != EOF)
  {
    cnt = 0;
    for(int i = a; i <= b; i++)
    {
      if(flag[i])
        cnt++; 
    }
    double ans = cnt / (double)(b - a + 1) ;
    ans = (ans * 100) + 1e-9; 
    printf("%.2lf\n", ans);  
  }
  return 0;
}