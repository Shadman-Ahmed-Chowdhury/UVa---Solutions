#include <bits/stdc++.h>

using namespace std;
int visited[1000];
int val[1001];
int x, ans;
vector <int> adj[100];

void bfs(int n, int s)
{
    for(int i = 0; i < n; i++)
        visited[i] = 0;
    queue<int> q;
    q.push(s);
    visited[s] = 1;
    ans = 0;
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        //printf("%d ", u);
        int a, b, mx = - 1;
        for(int i = 0; i < adj[u].size(); i++)
        {
            int v = adj[u][i];
            if(mx < val[v])
            {
                mx = val[v];
                b = v;
            }
        }
        if(visited[b] == 0)
        {
            ans = ans + mx;
            x = b;
            //printf("%d %d\n", mx, b);
            q.push(b);
            visited[b] = 1;
        }

    }
}
int main()
{
    int n, s, edges, a, b, T;
    scanf("%d", &T);
    for(int t = 1; t <= T; t++)
    {
        scanf("%d%d", &n, &edges);
        for(int i = 0; i < n; i++)
        {
            adj[i].clear();
            scanf("%d", &val[i]);
        }
        for(int i = 0; i < edges; i++)
        {
            scanf("%d%d", &a, &b);
            adj[a].push_back(b);
        }
        bfs(n, 0);
        printf("Case %d: %d %d\n", t, ans, x);
    }
    return 0;
}

