#include <bits/stdc++.h> 

using namespace std; 
bool isLeapYear(int year)
{
    if (year % 400 == 0) return true;
    else if(year % 100 == 0) return false;
    else if(year % 4 == 0) return true;
    else return false;
}
int main()
{
    int T, d, m, y1, y2, cnt;

    scanf("%d", &T); 
    for(int t = 1; t <= T; t++)
    {
        scanf("%d%d%d%d", &d, &m, &y1, &y2); 
        if(d == 29 && m == 2)
        {
            cnt = 0; 
            for(int i = y1 + 4; i <= y2; i += 4)
            {
                if(isLeapYear(i))
                    cnt++; 
            }
        }
        else
        {
            cnt = y2 - y1; 
        }
        printf("Case %d: %d\n", t, cnt); 
    }
    return 0; 
}