#include <bits/stdc++.h>

using namespace std;

int power(int a, int b)
{
  int res = 1;
  for(int i = 0; i < b; i++)
    res *= a;
  return res;
}
int main()
{
  int num;
  string str;
  while(cin >> str)
  {
    vector <char> v;
    num = 0;
    if(str[0] == '-')
      break;
    if(str[1] == 'x')
    {
      int sz = str.size();
      for(int i = 2; i < sz; i++)
      {
        int a;
        if(str[i] >= 'A' && str[i] <= 'F')
          a = (str[i] - 'A') + 10;
        else 
          a = str[i] - '0';
        int j = sz - i - 1;
        num += (power(16, j) * a);
      }
      cout << num << endl;
    }
    else
    {
      string ans;
      int a, rem;
      char ch;
      stringstream(str) >> a;
      while(a != 0)
      {
        rem = a % 16;
        if(rem > 9)
        {
          ch = (rem - 10) + 'A';
        }
        else
          ch = rem + '0';
        //cout << ch << endl;
        v.push_back(ch); 
        a = a / 16;
      }
      cout << "0x"; 
      while(!v.empty())
      {
        cout << v.back(); 
        v.pop_back(); 
      }
      cout << endl;
    }

  }
  return 0;
}
