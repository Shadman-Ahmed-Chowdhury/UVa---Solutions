#include <bits/stdc++.h>
using namespace std;

int main () {
    int Y, P;
    vector <int> arr;
    while(cin >> Y) {
        arr.clear();
        cin >> P;
        int a;
        for(int i = 0; i < P; i++) {
            cin >> a;
            arr.push_back(a);
        }
        int cnt;
        int mx = 0, f, l;
        for(int i = 0; i < arr.size(); i++) {
            cnt = 0;
            int j = 0;
            for(j = i; j < arr.size() && arr[j] < arr[i] + Y; j++) {
                cnt++;
            }
            if(cnt > mx) {
                mx = cnt;
                f = arr[i];
                l = arr[j - 1];
            }
        }
        cout << mx << " " << f << " " << l << endl;
    }
}

