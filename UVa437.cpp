#include <bits/stdc++.h>

using namespace std;

struct box{
    int a, b, c;
    box(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }
    bool operator < (box A) const
    {
        if((a < A.a && b < A.b) || (a < A.b && b < A.a))
            return true;
        return false;
    }
};

vector <box> v;
vector <vector <int> > List;
int arr[100];
int dp(int i)
{
      if(arr[i] != -1)
            return arr[i];
      int temp = 0;
      for(int j = 0; j < List[i].size(); j++)
            temp = max(temp, dp(List[i][j]));
      arr[i] = temp + v[i].c;
      return temp + v[i].c;
}
int main()
{
    int n, a, b, c, t = 1;
    while(scanf("%d", &n))
    {
        v.clear();
        if(n == 0)
            break;
        for(int i = 0; i < n; i++)
        {
            scanf("%d%d%d", &a, &b, &c);
            v.push_back(box(a, b, c));
            v.push_back(box(b, c, a));
            v.push_back(box(a, c, b));
        }
        int N = n * 3;
        List.clear();
        List.resize(N);
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < N; j++)
            {
                if(v[i] < v[j])
                  List[j].push_back(i);
            }
        }
        fill(arr, arr + N, -1);
        int mx_h = 0;
        for(int i = 0; i < N; i++)
            mx_h = max(mx_h, dp(i));
        printf("Case %d: maximum height = %d\n", t++, mx_h);
    }
    return 0;
}
