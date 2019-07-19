#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin >> str;
    map <string, pair<string, int> > mp;
    while(str != "#") {
        string word = "";
        for(int i = 0; i < str.size(); i++) {
            if(str[i] >= 65 && str[i] <= 90)
                word += (str[i] + 32);
            else
                word += str[i];
        }
        sort(word.begin(), word.end());
        //cout << word << endl;
        mp[word].first = str;
        mp[word].second++;
        cin >> str;
    }
    //cout << mp.size() << endl;
    map <string, pair <string, int> > :: iterator it;
    vector <string> v;
    for(it = mp.begin(); it != mp.end(); it++) {
        if(it->second.second == 1)
            v.push_back(it->second.first);
        //cout << it->first << " " << it->second.first << " " << it->second.second << endl;
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << endl;
    return 0;
}
