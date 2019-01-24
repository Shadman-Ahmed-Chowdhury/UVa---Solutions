#include <bits/stdc++.h> 

using namespace std; 
int Arr[100001];
void result()
{
  int sum, num; 
  for(int i = 1; i <= 100000; i++)
  {
    sum = i; num = i; 
    while(num != 0)
    {
      sum += num % 10; 
      num = num / 10; 
    }
    if(Arr[sum] == 0)
      Arr[sum] = i; 
  }
} 
int main()
{
  result(); 
  int t, T, n; 
  scanf("%d", &T); 
  for(t = 1; t <= T; t++)
  {
    scanf("%d", &n); 
    printf("%d\n", Arr[n]); 
  }
  return 0;
}