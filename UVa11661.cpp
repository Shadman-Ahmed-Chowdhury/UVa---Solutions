#include <bits/stdc++.h>

using namespace std;
#define inf 1e9
int main()
{
    int n;
    string str;
    while(1)
    {
        cin >> n;
        if(n == 0)
            break;
        cin >> str;
        int cntFlag = 0, cnt = 0, ans = inf;
        char ch;
        for(int i = 0; i < str.size(); i++)
        {
            if(str[i] == 'Z')
            {
                ans = 0;
                break;
            }
            if(cntFlag == 0)
            {
                if(str[i] == 'R' || str[i] == 'D')
                {
                        ch = str[i];
                        cntFlag = 1;
                        continue;
                }
            }
            else
            {
                cnt++;
                if(ch == str[i])
                    cnt = 0;
                if(ch == 'D' && str[i] == 'R')
                {
                    ch = 'R';
                    ans = min(cnt, ans);
                    cnt = 0;
                }
                else if(ch == 'R' && str[i] == 'D')
                {
                    ch = 'D';
                    ans = min(cnt, ans);
                    cnt = 0;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}

