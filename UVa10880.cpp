#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int T, q, n;
    set <int> s;
    scanf("%d", &T);
    for(int t = 1; t <= T; t++)
    {
        s.clear();
        int a, b;
        scanf("%d%d", &a, &b);
        n = a - b;
        int i = 1;
        while(i * i <= n)
        {
            if(n % i == 0)
            {
                s.insert(i);
                s.insert(n / i);
            }
            i++;
        }
        set <int> :: iterator it;
        printf("Case #%d:", t);
        if(n == 0)
        {
            cout << " 0" << endl;
            continue;
        }
        for(it = s.begin(); it != s.end(); it++)
        {
            int x = *it;
            if(x > b)
                cout << " " << x;
        }
        cout << endl;
    }
    return 0;
}