//BFS in 2d grid..

#include <bits/stdc++.h>

using namespace std;
#define pii pair <int, int>
int fx[] = {1, -1, 0, 0};
int fy[] = {0, 0, 1, -1};
//int cell[1001][1001];
int d[1001][1001], vis[1001][1001];
int row, col;

void bfs(int sx, int sy)
{
    memset(vis, 0, sizeof(vis));
    vis[sx][sy] = 1;
    queue <pii> q;
    q.push(pii(sx, sy));
    while(!q.empty())
    {
        pii top = q.front();
        q.pop();
        for(int k = 0; k < 4; k++)
        {
            int tx = top.first + fx[k];
            int ty = top.second + fy[k];
            if(tx >= 0 && tx < row && ty >= 0 && ty < col && d[tx][ty] != -1 && vis[tx][ty] == 0)
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
    while(scanf("%d%d", &row, &col))
    {
        if(row == 0 && col == 0)
            break;
        memset(d, 0, sizeof(d)); 
        int n, R, C, num;
        scanf("%d", &n);
        for(int i = 0; i < n; i++)
        {
            scanf("%d%d", &R, &num);
            for(int j = 0; j < num; j++)
            {
                scanf("%d", &C);
                d[R][C] = -1;
            }
        }
        int sx, sy, dx, dy; 
        scanf("%d%d%d%d", &sx, &sy, &dx, &dy);
        bfs(sx, sy); 
        printf("%d\n", d[dx][dy]);
    }
    return 0;
}
