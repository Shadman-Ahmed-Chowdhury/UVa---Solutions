#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, m;
    while(1) {
        cin >> n >> m;
        if(n == 0 && m == 0)
            break;
        long long a;
        set <long long> s;
        for(long long i = 0; i < n; i++) {
            cin >> a;
            s.insert(a);
        }
        for(long long i = 0; i < m; i++) {
            cin >> a;
            s.insert(a);
        }
        cout << ((n + m) - s.size()) << endl;
    }
}

