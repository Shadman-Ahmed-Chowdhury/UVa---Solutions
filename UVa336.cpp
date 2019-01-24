//Uva 336 A Node too far..

#include <bits/stdc++.h>

using namespace std;
map <int, int> vis;
void bfs(int s, map <int, vector <int> > adj)
{
    vis.clear();
    queue<int>q;
    q.push(s);
    vis[s] = 0;
    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        for(int i=0; i<adj[u].size(); i++)
        {
            int v = adj[u][i];
            if(!vis.count(v))
            {
                vis[v] = vis[u] + 1;
                q.push(v);
            }
        }
    }
}
int main()
{
    int edges, T = 1;
    while(scanf("%d", &edges))
    {
        map <int, vector <int> > adj;
        if(edges == 0)
            break;
        int a, b;
        for(int i = 0; i < edges; i++)
        {
            scanf("%d%d", &a, &b);
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        int s, t;
        while(scanf("%d%d", &s, &t))
        {
            if(s == 0 && t == 0)
                break;
            bfs(s, adj);
            map <int, int> :: iterator it;
            int cnt = 0;
            for(it = vis.begin(); it != vis.end(); it++)
            {
                if(it->second > t)
                  cnt++;
                //cout << it -> first << " " << it -> second << endl;
            }
            //cout << adj.size() << " " << vis.size() << endl;
            cnt = cnt + (adj.size() - vis.size());
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n", T++, cnt, s, t);
        }
    }
    return 0;
}
