#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(scanf("%d", &n))
    {
        if(n == 0)
            break;
        vector <int> v, dis;
        for(int i = 1; i <= n; i++)
            v.push_back(i);
        while(1)
        {
            if(v.size() == 1)
                break;
            int a = v[0];
            v.erase(v.begin());
            dis.push_back(a);
            int b = v[0];
            v.erase(v.begin());
            v.push_back(b);
        }
        printf("Discarded cards:");
        if(dis.size() == 0)
            printf("\n");
        else
            printf(" "); 
        for(int i = 0; i < dis.size(); i++)
        {
            if(i == (dis.size() - 1))
                cout << dis[i] << endl;
            else
                cout << dis[i] << ", ";
        } 
        printf("Remaining card: ");
        cout << v[0] << endl; ;
    }
    return 0;
}
