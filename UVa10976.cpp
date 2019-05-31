#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k, x, y;
    while(scanf("%d", &k) != EOF) {
        vector <pair <int, int> > v;
        for(y = k + 1; y <= 2 * k; y++) {
            if((y * k) % (y - k) == 0) {
                x = (y * k) / (y - k);
                v.push_back({x, y});
            }
        }
        cout << v.size() << endl;
        for(int i = 0; i < v.size(); i++) {
            cout << "1/" << k << " = " << "1/" << v[i].first << " + " << "1/" << v[i].second << endl;
        }
    }
}

