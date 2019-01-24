#include <bits/stdc++.h>

using namespace std;

vector <int> v;
map <int, int> mymap;
int main()
{
    int n;
    while(scanf("%d", &n) != EOF)
    {
        if(mymap.count(n) == 0)
        {
            mymap[n] = 1;
            v.push_back(n);
        }
        else
            mymap[n]++; 

    }
    vector <int> :: iterator it;
    for(it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " " << mymap[*it] << endl;
    }
    return 0;
}
