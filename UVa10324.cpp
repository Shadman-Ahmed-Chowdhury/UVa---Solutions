#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t = 1;
    while(1) {
        string str;
        cin >> str;
        if(str == "")
            break;
        int q;
        int a, b;
        cin >> q;
        printf("Case %d:\n", t++);
        for(int k = 0; k < q; k++) {
            cin >> a >> b;
            if(a > b)
                swap(a, b);
            int flag = 1;
            char ch = str[a];
            for(int i = a; i <= b; i++) {
                if(ch != str[i]) {
                    flag = 0;
                    break;
                }
            }
            if(flag == 1)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}

