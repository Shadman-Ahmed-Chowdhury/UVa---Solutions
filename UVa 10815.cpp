#include <bits/stdc++.h>

using namespace std;

int main()
{
  string line, input;
  string w;
  set <string> s;
  while(getline(cin, input))
  {
    if(line == "^D")
      break;
    line += " " + input;
  }
  //cout << line << endl;
  int len = line.size();
  for(int i = 0; i < len; i++)
  {
    if(line[i] >= 65 && line[i] <= 90)
      {
        line[i] = line[i] + 32;
      }
      else if(!(line[i] >= 97 && line[i] <= 122))
      {
            line[i] = ' ';
      }
  }
  //cout << line << endl;
  istringstream iS(line);
  while(iS >> w)
  {
    s.insert(w);
  }
  set <string> :: iterator it;
  for(it = s.begin(); it != s.end(); it++)
      cout << *it << endl;
  return 0;
}
