#include <bits/stdc++.h>

using namespace std;
int n, m, l, a, b;
struct agency
{
  char name[17];
  int cost;
};
bool cmp(agency A, agency B)
{
  if(A.cost == B.cost)
    return strcmp(A.name, B.name) < 0;
  return A.cost < B.cost;
}

int main()
{
  int T;
  scanf("%d", &T);
  agency arr[101];
  for(int t = 1; t <= T; t++)
  {
    scanf("%d%d%d", &n, &m, &l);
    for(int j = 0; j < l; j++)
    {
      getchar();
      scanf("%[^:]:%d,%d", arr[j].name, &a, &b);
      int cst = 0;
      int x = n;
      while(x != m)
      {
        if(x / 2 < m)
          cst += a * (x - m), x = m;
        else
        {
          int d = x - (x / 2);
          if(d * a > b)
            cst += b;
          else
            cst += d * a;
          x = x / 2;
        }
      }
      arr[j].cost = cst;
    }
    sort(arr, arr + l, cmp);
    printf("Case %d\n", t);
    for(int i = 0; i < l; i++)
      printf("%s %d\n", arr[i].name, arr[i].cost);
  }
  return 0;
}
