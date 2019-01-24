#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, r;
    string str;
    char ch1, ch2;
    cin >> T;
    for(int t = 1; t <= T; t++)
    {
        cin >> str;
        //cout << str << endl;
        cin >> r;
        string a = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        for(int i = 0; i < r; i++)
        {
            cin >> ch1 >> ch2;
            for(int j = 0; j < 26; j++)
            {
                if(a[j] == ch2)
                    a[j] = ch1;
            }
        }
        //cout << a << endl;
        for(int i = 0 ; i < str.size(); i++)
        {
            if(str[i] >= 65 && str[i] <= 90)
                cout << a[str[i] - 65];
            else
                cout << str[i];
        }
        cout << endl;
    }
    return 0;
}
