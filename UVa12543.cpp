#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str, ans;
    int mx = -1, cnt = 0;
    while(cin >> str)
    {
        cnt = 0;
        if(str == "E-N-D")
            break;
        for(int i = 0; i < str.size(); i++)
        {
            if((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122) || (str[i] == '-'))
                cnt++;
        }
        if(mx < cnt)
        {
            ans = str;
            mx = cnt;
        }
    }
    for(int i = 0; i < ans.size(); i++)
    {
        if(ans[i] >= 65 && ans[i] <= 90)
            printf("%c", ans[i] + 32);
        else if((ans[i] >= 97 && ans[i] <= 122) || ans[i] == '-') 
            printf("%c", ans[i]);
        else
            continue;
    }
    printf("\n");
    return 0;
}
