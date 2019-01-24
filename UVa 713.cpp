#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, T;
    string str1, str2;

    scanf("%d", &T);
    for(t = 1; t <= T; t++)
    {
        cin >> str1 >> str2;
        string ans;
        //reverse(str1.begin(), str1.end());
        //reverse(str2.begin(), str2.end());
        int a = str1.size();
        int b = str2.size();
        //cout << str1 << " " << str2 << endl;
        int i = 0, j = 0, n, m, c = 0, sum;
        while(i < a|| j < b)
        {
            n = 0;
            m = 0;
            if(i < a)
            {
                n = str1[i] - 48;
                //cout << n << endl;
                i++;
            }
            if(j < b)
            {
                m = str2[j] - 48;
                //cout << m << endl;
                j++;
            }
            //cout << n << " " << m << endl;
            sum = n + m;
            sum = sum + c;
            //cout << "Sum = " << sum << endl ;
            c = 0;
            if(sum >= 10)
            {
                sum = sum - 10;
                c = 1;
            }
            ans += (sum + 48);
        }
        if(c == 1)
            ans += (c + 48);
        int k = 0;
        int flag = 0;
        for(k = 0; k < ans.size(); k++)
        {
              if(ans[k] == '0')
                  continue;
              else if(ans[k] != '0')
              {
                cout << ans[k];
                flag = 1;
                break;
              }
        }
        if(flag == 1)
        {
            for(int j = k + 1; j < ans.size(); j++)
                cout << ans[j];
        }
        cout << endl;
    }
    return 0;
}
