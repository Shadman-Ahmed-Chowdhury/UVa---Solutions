#include <bits/stdc++.h>

using namespace std;
struct shoe
{
    int time;
    int fine;
    int id;
};
bool cmp(const shoe &A, const shoe &B)
{
    return A.time * B.fine < B.time * A.fine;
}
int main()
{
    int T, n, a, b, id;
    scanf("%d", &T);
    for(int t = 1; t <= T; t++)
    {
        scanf("%d", &n);
        vector <shoe> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a >> b;
            v[i].time = a;
            v[i].fine = b;
            v[i].id = i + 1;
        }
        stable_sort(v.begin(), v.end(), cmp);
        printf("%d", v[0].id);
        for(int i = 1; i < n; i++)
            printf(" %d", v[i].id);
        printf("\n");
        if(t < T)
            printf("\n");
    }
}

