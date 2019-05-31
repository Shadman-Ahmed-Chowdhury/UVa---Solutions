#include <bits/stdc++.h>

using namespace std;

int main()
{
    map <string, pair <int, int> > mp;
    int T;
    cin >> T;
    while(T--) {

        int n;
        cin >> n;
        string str;
        int a, b;
        mp.clear();
        for(int i = 0; i < n; i++) {
            cin >> str >> a >> b;
            mp[str] = {a, b};
        }
        map <string, pair <int, int> > :: iterator it;
        int q, x;
        cin >> q;
        int cnt = 0;
        string ans;
        for(int i = 0; i < q; i++) {
            cnt = 0;
            cin >> x;
            for(it = mp.begin(); it != mp.end(); it++) {
                if(it->second.first <= x && it->second.second >= x)
                    ans = it->first, cnt++;
                if(cnt > 1)
                    break;
            }
            if(cnt > 1 || cnt == 0)
                ans = "UNDETERMINED";
            cout << ans << endl;
        }
        if(T)
            cout << endl;
    }
    return 0;
}

