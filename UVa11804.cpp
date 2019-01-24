#include <bits/stdc++.h>

using namespace std;

struct Arg
{
  string str;
  int att;
  int def;
};
bool cmp1(Arg x, Arg y)
{
  if(x.att != y.att)
    return x.att > y.att;
  else if(x.def != y.def)
    return x.def < y.def;
  else
    return x.str < y.str;
}
bool cmp2(Arg x, Arg y)
{
  return x.str < y.str;
}
int main()
{
  int a, b, T;
  string str;
  cin >> T;
  Arg arr[10];
  for(int t = 1; t <= T; t++)
  {
    for(int i = 0; i < 10; i++)
      cin >> arr[i].str >> arr[i].att >> arr[i].def;
    sort(arr, arr + 10, cmp1);
    //for(int i = 0; i < 10; i++)
      //cout << arr[i].str << " " << arr[i].att << " " << arr[i].def << endl;
    sort(arr, arr + 5, cmp2);
    printf("Case %d:\n(", t);
    for(int i = 0; i < 5; i++)
    {
      if(i != 4)
        cout << arr[i].str << ", "; 
      else
        cout << arr[i].str << ")\n"; 
    }
    sort(arr + 5, arr + 10, cmp2); 
    printf("(");
    for(int i = 5; i < 10; i++)
    {
      if(i != 9)
        cout << arr[i].str << ", ";
      else
        cout << arr[i].str << ")\n"; 
    }
  }
  return 0;
}
