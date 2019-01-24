#include <bits/stdc++.h>

using namespace std;
int main()
{
    map <string, int> m;
    m["JAN"] = 31;
    m["FEB"] = 28;
    m["MAR"] = 31;
    m["APR"] = 30;
    m["MAY"] = 31;
    m["JUN"] = 30;
    m["JUL"] = 31;
    m["AUG"] = 31;
    m["SEP"] = 30;
    m["OCT"] = 31;
    m["NOV"] = 30;
    m["DEC"] = 31;
    m["SUN"] = 1;
    m["MON"] = 2;
    m["TUE"] = 3;
    m["WED"] = 4;
    m["THU"] = 5;
    m["FRI"] = 6;
    m["SAT"] = 7;
    int T;
    cin >> T;
    map <string, int> :: iterator it;
    while(T--)
    {
        string month, day;
        cin >> month >> day;
        int ans = 8;
        int mon;
        int d;
        for(it = m.begin(); it != m.end(); it++)
        {
            if(month == it->first)
                mon = it->second;
            if(day == it->first)
                d = it->second;
        }
        //cout << mon << endl << d << endl;
        if(d == 7)
            ans--;
        int a = (d + mon) - 1;
        if(a == 34)
            ans++;
        else if(a > 34)
            ans = ans + 2;
        cout << ans << endl;
    }
    return 0;
}
