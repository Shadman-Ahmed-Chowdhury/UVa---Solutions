#include <bits/stdc++.h>

using namespace std;

int main()
{
    while(1) {
        string str;
        string pattern;
        cin >> pattern >> str;
        if(pattern == "")
            break;
        char ch = pattern[0];
        int j = 0;
        for(int i = 0; i < str.size(); i++) {
            if(str[i] == ch) {
                j++;
                ch = pattern[j];
            }
        }
        //cout << j << endl;
        if(j == pattern.size())
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}

