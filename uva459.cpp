#include <bits/stdc++.h>

using namespace std;

vector <int> adj[31];
bool visited[31];

void dfs(int u)
{
    visited[u] = 1; 
    for(int i = 0; i < adj[u].size(); i++)
    {
        int v = adj[u][i]; 
        if(visited[v] == 0)
            dfs(v); 
    }
    return; 
}

int main()
{
    int n, T, a, b, cnt;
    char str[3];
    scanf("%d", &T);
    scanf("\n");

    while(T--)
    {
        gets(str);
        n = str[0] - 'A';

        memset(visited, 0, sizeof(visited)); 
        for(int i = 0; i <= n; i++)
            adj[i].clear();
        while(gets(str) && str[0])
        {
            a = str[0] - 'A';
            b = str[1] - 'A';
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        cnt = 0;
        for(int i = 0; i <= n; i++)
        {
            if(visited[i] == 0)
            {
                dfs(i);
                cnt++;
            }
        }
        printf("%d\n", cnt);
        if(T)
            printf("\n");
    }
    return 0;
}
