#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;

    scanf("%d", &T);
    for(int t = 1; t <= T; t++)
    {
        vector <string> v;
        string word;
        //map <string, int> dic;
        while(cin >> word)
        {
            if(word == "*")
                break;
            v.push_back(word);
        }
        cin.ignore();
        string line;
        while(getline(cin, line))
        {
            if(line == "")
                break;
            string s, d;
            map <string, int> dic;
            stringstream ss(line);
            while(ss >> s >> d);
            //cout << s << endl << d;
            queue <string> q;
            dic[s] = 0;
            q.push(s);
            while(!q.empty() && dic.count(d) == 0)
            {
                string temp = q.front();
                q.pop();
                for(int i = 0; i < v.size(); i++)
                {
                    string temp2 = v[i];
                    if(temp.size() == temp2.size() && dic.count(temp2) == 0)
                    {
                        int d = 0;
                        for(int s = 0; s < temp.size(); s++)
                            if(temp[s] != temp2[s])
                                d++;
                        if(d == 1)
                        {
                            dic[temp2] = dic[temp] + 1;
                            q.push(temp2);
                        }
                    }

                }
            }
            cout << s << " " << d << " " << dic[d] << endl;
        }
        if(t < T)
            cout << endl;
    }
    return 0;
}
