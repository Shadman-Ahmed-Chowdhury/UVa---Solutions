#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b;

    while(scanf("%d", &n))
    {
        if(n == 0)
            break;
        vector <pair <int, int> > v1(n), v2(n);
        for(int i = 0; i < n; i++)
        {
            scanf("%d%d", &a, &b);
            v1.push_back({a, b}); 
            v2.push_back({b, a}); 
        }
        sort(v1.begin(), v1.end()); 
        sort(v2.begin(), v2.end()); 
        if(v1 == v2)
            printf("YES\n"); 
        else
            printf("NO\n"); 
    }
    return 0; 
}
