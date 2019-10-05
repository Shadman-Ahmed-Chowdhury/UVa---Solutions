#include<bits/stdc++.h>
using namespace std;

bool isPalindrom(string str) {
    string rev = str;
    reverse(rev.begin(), rev.end());
    if(str == rev)
        return true;
    else
        return false;
}
int main()
{
    string str;
    while(cin >> str) {
        int n = str.size();
        int cnt = 0;
        set<string> s;
        for(int i = 0; i < n; i++) {
            for(int len = 1; len <= n - i; len++) {
                string temp = str.substr(i, len);
                if(s.count(temp) == 0) {
                    if(isPalindrom(temp))
                        cnt++;
                    s.insert(temp);
                }
            }
        }
        cout << "The string '" << str << "' contains " << cnt << " palindromes." << endl;
    }
}



