#include <bits/stdc++.h>

using namespace std;
#define pii pair <int, int>
int fx[] = {-2,-1,1,2,2,1,-1,-2};
int fy[] = {1,2,2,1,-1,-2,-2,-1};
int d[1001][1001], vis[1001][1001];
int row = 8, col = 8;

int bfs(int sx, int sy, int dx, int dy)
{
    memset(vis, 0, sizeof(vis));
    vis[sx][sy] = 1;
    queue <pii> q;
    q.push(pii(sx, sy));
    while(!q.empty())
    {
        pii top = q.front();
        q.pop();
        if(top.first == dx && top.second == dy)
            return d[dx][dy];
        for(int k = 0; k < 8; k++)
        {
            int tx = top.first + fx[k];
            int ty = top.second + fy[k];
            if(tx >= 0 && tx < row && ty >= 0 && ty < col)
            {
                vis[tx][ty] = 1;
                d[tx][ty] = d[top.first][top.second] + 1;
                q.push(pii(tx, ty));
            }
        }
    }
}

int main()
{
    string str1, str2;

    while(cin >> str1 >> str2)
    {
        memset(d, 0, sizeof(d));
        int a2 = str1[0] - 'a';
        int a1 = str1[1] - '1';
        int b2 = str2[0] - 'a';
        int b1 = str2[1] - '1';
        int ans = bfs(a1, a2, b1, b2);
        //cout << a1 << a2 << b1 << b2 << endl;
        //cout << ans << endl;
        cout << "To get from " << str1 << " to " << str2 << " takes " << ans << " knight moves.\n";
    }
    return 0;
}
