#include <bits/stdc++.h>

using namespace std;
#define inf 1e9
int visited[1005];
vector <int> adj[1005];

void bfs(int n, int s)
{
    for(int i = 0; i < n; i++)
        visited[i] = inf;
    queue<int> q;
    q.push(s);
    visited[s] = 0;
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        //printf("%d ", u);
        for(int i = 0; i < adj[u].size(); i++)
        {
            int v = adj[u][i];
            if(visited[v] == inf)
            {
                visited[v] = visited[u] + 1;
                q.push(v);
            }
        }
    }
}
int main()
{

    int T;
    cin >> T;
    for(int t = 1; t <= T; t++)
    {
        int n, s, edges, a, b;
        cin >> n >> edges;

        for(int i = 0; i < edges; i++)
        {
            scanf("%d%d", &a, &b);
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        bfs(n, 0);
        if(t > 1)
            printf("\n");
        for(int i = 1; i < n; i++)
            printf("%d\n", visited[i]);

        for(int i = 0; i < n; i++)
            adj[i].clear();
    }
    return 0;
}

