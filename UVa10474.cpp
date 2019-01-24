#include <bits/stdc++.h>

using namespace std;

int main()
{
  int a, b, cnt = 1, x, y, j, flag;
  while(1)
  {
    scanf("%d%d", &a, &b);
    if(a == 0 && b== 0)
      break;
    int arr[10001];
    multiset <int> S;
    for(int i = 0; i < a; i++)
    {
      scanf("%d", &x);
      S.insert(x);
    }
      j = 0;
    multiset <int> :: iterator it;
    for(it = S.begin(); it != S.end(); it++)
    {
      arr[j++] = *it;
    }
    printf("CASE# %d:\n", cnt);
    for(int i = 1; i <= b; i++)
    {
      flag = 0;
      scanf("%d", &y);
      for(int k = 0; k < j; k++)
      {
        if(arr[k] == y)
        {
          printf("%d found at %d\n", y, k+1);
          flag = 1;
          break;
        }
      }
      if(flag == 0)
        printf("%d not found\n", y);
    }
    cnt++;
  }
  return 0;
}
