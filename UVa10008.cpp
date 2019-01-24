#include <bits/stdc++.h>

using namespace std;
int arr[26];

int main()
{
    int n;
    scanf("%d\n", &n) ;
    string str, x;
    vector <int> v;
    for(int i = 0; i < n; i++)
    {
        getline(cin, str);
        for(int i = 0; i < str.size(); i++)
        {
            if(str[i] >= 97 && str[i] <= 122)
                arr[str[i] - 97]++;
            else if(str[i] >= 65 && str[i] <= 90)
                arr[str[i] - 65]++;
            else
                continue;
        }
    }
    for(int i = 0; i < 26; i++)
    {
        if(arr[i] != 0)
            v.push_back(arr[i]);
    }
    sort(v.begin(), v.end());
    //for(int i = 0; i < v.size(); i++)
       // cout << v[i] << endl;
    while(!v.empty())
    {
        int a = v.back();
        //cout << a << endl;
        v.pop_back();
        for(int i = 0; i < 26; i++)
        {
            if(arr[i] == a)
            {
                printf("%c %d\n", i + 65, a);
                arr[i] = 0;
            }
        }
    }
    return 0;
}
