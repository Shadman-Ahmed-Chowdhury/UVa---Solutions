#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    scanf("%d", &T);
    string str1, str2;
    for(int t = 1; t <= T; t++)
    {
        map <string, string> m1, m2;
        cin >> str1;
        cin >> str2;
        string name, num;
        int c = 1, n = 0;
        for(int i = 1; i < str1.size(); i++)
        {
            if(c == 1)
            {
                if(str1[i] == 58)
                    c = 0;
                else if(str1[i] == 125)
                    break;
                else
                    name = name + str1[i];
            }
            else if(c == 0)
            {
                if(str1[i] == 44 || str1[i] == 125)
                {
                    c = 1;
                    m1[name] = num;
                    //cout << name << " " << num << endl;
                    name.clear();
                    num.clear();
                }
                else
                    num = num + str1[i];
            }
        }
        for(int i = 1; i < str2.size(); i++)
        {
            if(c == 1)
            {
                if(str2[i] == 58)
                    c = 0;
                else
                    name = name + str2[i];
            }
            else if(c == 0)
            {
                if(str2[i] == 44 || str2[i] == 125)
                {
                    c = 1;
                    m2[name] = num;
                    //cout << name << " " << num << endl;
                    name.clear();
                    num.clear();
                }
                else
                    num = num + str2[i];
            }
        }
        map<string, string> :: iterator it;
        /*
        for(it = m1.begin(); it != m1.end(); it++)
            cout << it -> first << " "  << it -> second << endl;
        for(it = m2.begin(); it != m2.end(); it++)
            cout << it -> first << " " << it -> second << endl;*/
        int y = 0;
        int f = 0;
        for(it = m2.begin(); it != m2.end(); it++)
        {
            if(m1.count(it->first) == 0)
            {
                if(f == 0)
                    cout << "+" << it->first, f = 1;
                else
                    cout << "," << it->first;
            }
        }
        if(f == 1)
            cout << endl, y = 1;
        f = 0;
        for(it = m1.begin(); it != m1.end(); it++)
        {
            if(m2.count(it->first) == 0)
            {
                if(f == 0)
                    cout << "-" << it->first, f = 1;
                else
                    cout << "," << it->first;
            }
        }
        if(f == 1)
            cout << endl, y = 1;
        f = 0;
        for(it = m1.begin(); it != m1.end(); it++)
        {
            if(m2.count(it->first) == 1)
            {
                if(m1[it->first] != m2[it->first])
                {
                    if(f == 0)
                        cout << "*" << it->first, f = 1;
                    else
                        cout << "," << it->first;
                }
            }
        }
        if(f == 1)
            cout << endl, y = 1;

        if(y == 0)
            printf("No changes\n");
        printf("\n");
    }
    return 0;
}
