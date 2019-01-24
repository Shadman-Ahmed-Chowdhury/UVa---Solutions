#include <bits/stdc++.h>

using namespace std;
int arr[256];
int main()
{
    string line;
    vector <vector <string> > str;
    int c;
    while(getline(cin, line))
    {
        stringstream ss(line);
        string mystr;
        vector <string> v;
        while(ss >> mystr)
        {
            v.push_back(mystr);
            //cout << mystr << endl;
            int sz = mystr.size();
            arr[v.size()] = max(arr[v.size()], sz);
        }
        str.push_back(v);
    }
    for(int i = 1; i < 256; i++)
        arr[i] += arr[i - 1] + 1;
    for(int i = 0; i < str.size(); i++)
    {
        vector <string> &v = str[i];
        int cur = 0;
        for(int j = 0; j < v.size(); j++)
        {
            while(cur < arr[j])
            {
                putchar(' ');  
                cur++;
            }
            printf("%s", v[j].c_str());
            cur += v[j].length();
        }
        puts("");
    }
    return 0;
}
