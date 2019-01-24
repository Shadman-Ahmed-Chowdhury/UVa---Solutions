#include <bits/stdc++.h>

using namespace std;

int main()
{
  int T, n, d, ans;
  string str1, str2;

  cin >> T;
  for(int t = 1; t <= T; t++)
  {
    ans = 0;
    cin >> n >> str1 >> str2;
    for(int i = 0; i < n; i++)
    {
      int a = str1[i] - '0';
      int b = str2[i] - '0';
      int d1 = abs(a - b);
      int d2 = 9 - d1 + 1;
      d = min(d1, d2);

      ans += d;
    }
    printf("Case %d: %d\n", t, ans);
  }
  return 0;
}
