#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    int pallindrome = 0, mirrored = 1;
    map <char, char> mp;
    mp['A'] = 'A';
    mp['E'] = '3';
    mp['3'] = 'E';
    mp['H'] = 'H';
    mp['I'] = 'I';
    mp['J'] = 'L';
    mp['L'] = 'J';
    mp['M'] = 'M';
    mp['O'] = 'O';
    mp['S'] = '2';
    mp['2'] = 'S';
    mp['T'] = 'T';
    mp['U'] = 'U';
    mp['V'] = 'V';
    mp['W'] = 'W';
    mp['X'] = 'X';
    mp['Y'] = 'Y';
    mp['Z'] = '5';
    mp['5'] = 'Z';
    mp['1'] = '1';
    mp['8'] = '8';
    while(cin >> str)
    {
        int pallindrome = 0, mirrored = 1;
        string str1 = str;
        reverse(str1.begin(), str1.end());
        if(str == str1)
            pallindrome = 1;
        int n = str.size();
        int j = n - 1;

        for(int i = 0; i < n / 2; i++)
        {
            if(mp[str[i]] != str[j])
            {
                mirrored = 0;
                break;
            }
            j--;
        }
        if(n & 1) {
            if(mp[str[n / 2]] != str[n / 2])
                mirrored = 0;
        }
        if(pallindrome == 1 && mirrored == 1)
            cout << str << " -- is a mirrored palindrome.\n";
        else if(pallindrome == 0 && mirrored == 0)
            cout << str << " -- is not a palindrome.\n";
        else if(pallindrome == 0 && mirrored == 1)
            cout << str << " -- is a mirrored string.\n";
        else
            cout << str << " -- is a regular palindrome.\n";

        cout << endl;
    }
    return 0;
}

