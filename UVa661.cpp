#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, c, a, t = 1;
    while(1) {
        cin >> n >> m >> c;
        if(n == 0 && m == 0 && c == 0)
            break;
        int cur = 0, flag = 0, mx = -1;
        vector <int> cap(n + 1), state(n + 1);
        for(int i = 1; i <= n; i++)
            cin >> cap[i];
        for(int i = 0; i < m; i++) {
            cin >> a;
            if(state[a] == 0) {
                state[a] = 1;
                cur += cap[a];
            }
            else {
                state[a] = 0;
                cur -= cap[a];
            }
            mx = max(mx, cur);
            if(cur > c) {
                flag = 1;
            }
        }
        //cout << cur << endl;
        cout << "Sequence " << t++ << endl;
        if(flag == 1) {
            cout << "Fuse was blown.\n";
            cout << endl;
        }
        else {
            cout << "Fuse was not blown.\n";
            cout << "Maximal power consumption was " << mx << " amperes." << endl;
            cout << endl;
        }
    }
    return 0;
}

