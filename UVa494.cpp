#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    string line;
    while(getline(cin, str))
    {
        int cnt = 0, flag = 0;
        int sz = str.size();
        for(int i = 0; i < sz; i++)
        {
            if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
                flag = 1;
            else
            {
                cnt = cnt + flag;
                flag = 0;
            }
        }
        cnt = cnt + flag;
        printf("%d\n", cnt);
    }
    return 0;
}

