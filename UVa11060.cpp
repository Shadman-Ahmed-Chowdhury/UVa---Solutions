#include <bits/stdc++.h>

using namespace std;
int Fib[45] = { 0, 1,  2, 3, 5, 8, 13, 21, 34, 55,
    89, 144, 233, 377, 610,987, 1597, 2584, 4181,6765, 10946, 17711, 28657,46368, 75025};

int main()
{
    int T, m, b;
    string str;
    scanf("%d\n", &T);
    for(int t = 1; t <= T; t++)
    {
        b = 0;
        m = 0;
        getline(cin, str);
        int len = str.size();
        int j = 0;
        for(int i = 0; i < len; )
        {
            str[i] = 'A';
            i = Fib[j++];
            //printf("%d\n", i);
        }
        //cout << str << endl;
        for(int i = 0; i < len; i++)
        {
            if(str[i] == 'B')
                b++;
            else if(str[i] == 'M')
                m++;
        }
        //printf("%d %d\n", m,  b);
        if(b > m)
            printf("Aaj Kemon Bodh Korcho\n");
        else if(m > b)
            printf("Hala Madrid\n");
        else
            printf("Meh :\\n");
    }
}
