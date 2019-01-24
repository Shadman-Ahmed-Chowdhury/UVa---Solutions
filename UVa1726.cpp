#include <bits/stdc++.h>

using namespace std;
struct ques
{
    int a;
    int b;
    char ch;
    ques(int _a, int _b, char _ch)
    {
        a = _a;
        b = _b;
        ch = _ch;
    }
};
int main()
{
    int T, n;
    scanf("%d", &T);
    for(int t = 1; t <= T; t++)
    {
        vector <ques> bhalo;
        vector <ques> fash;
        scanf("%d", &n);
        for(int i = 0; i < n; i++)
        {
            int a, b;
            char ch;
            cin >> a >> b >> ch;
            //printf("%d %d %c\n", a, b, ch);
            if((b == 1 && ch == 'i') || (b == 0 && ch == 'c'))
                continue;
            if(b == 0 && ch == 'i')
                bhalo.push_back(ques(a, b, ch));
            else if(b == 1 && ch == 'c')
                fash.push_back(ques(a, b, ch));
        }
        /*
        for(int i = 0; i < bhalo.size(); i++)
            printf("%d %d %c\n", bhalo[i].a, bhalo[i].b, bhalo[i].ch);
        for(int i = 0; i < fash.size(); i++)
            printf("%d %d %c\n", fash[i].a, fash[i].b, fash[i].ch);*/
        int cnt = 0;
        for(int i = 0; i < bhalo.size(); i++)
        {
            for(int j = 0; j < fash.size(); j++)
            {
                if(bhalo[i].a < fash[j].a)
                    cnt++;
            }
        }
        printf("%d\n", cnt);

    }
    return 0;
}

