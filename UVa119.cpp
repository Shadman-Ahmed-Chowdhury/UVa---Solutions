#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int flag = 0;
    while(cin >> n) {
        int netWorth[50] = {0};
        map <string, int> mp;
        if(flag == 1)
            cout << endl;
        string str;
        vector <string> v;
        for(int i = 0; i < n; i++) {
            cin >> str;
            mp[str] = i;
            v.push_back(str);
        }
        for(int i = 0; i < n; i++) {
            cin >> str;
            int total, p;
            cin >> total >> p;
            if(p > 0) {
                if(total % p != 0)
                    total = total - (total % p);
                netWorth[mp[str]] -= total;
                for(int i = 0; i < p; i++) {
                    cin >> str;
                    netWorth[mp[str]] += (total / p);
                }
            }
        }
        /*map <string, int> :: iterator it;
        int i = 0;
        for(it = mp.begin(); it != mp.end(); it++) {
            cout << it->first << " " << netWorth[i++] << endl;
        }*/
        for(int i = 0; i < n; i++) {
            cout << v[i] << " " << netWorth[i] << endl;
        }
        flag = 1;
    }
    return 0;
}
