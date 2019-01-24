#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, x;
  string name[101];
  string wish[] = {"Happy", "birthday", "to", "you", "Happy", "birthday", "to",
                    "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"};
  cin >> n;
  for(int i = 0; i < n; i++)
    cin >> name[i] ;
  if(n > 16)
  {
    int rem = n % 16;
    if(rem != 0)
    {
      x = n + (16 - rem);
    }
    int j = 0;
    int k = 0;
    int i = 0;
    while(k < x)
    {
      cout << name[i] << ": " << wish[j] << endl;
      j++;
      k++;
      i++;
      if(j == 16)
        j = 0;
      if(i == n)
        i = 0;
    }
  }
  else
  {
    int j = 0;
    for(int i = 0; i < 16; i++)
    {
      cout << name[j] << ": " << wish[i] << endl;
      j++;
      if(j == n)
        j = 0;
    }
  }
  return 0;
}
