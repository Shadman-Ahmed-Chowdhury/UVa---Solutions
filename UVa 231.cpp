/* 
Problem: UVa 231 
Tags: Longest decreasing subsequence. 
Author: Shadman Ahmed
Date: 09/10/2017
Time: 3:15 PM
*/

#include <bits/stdc++.h>

using namespace std;
int main()
{
  int n;
  multiset <int, greater<int> > myset;
  multiset <int> :: iterator it;
  int t, T;
  int flag = -2;
  int c = 1;
  int s = -1;
  while(1)
  {

    scanf("%d", &n);
    if(flag == n)
      break;
      if(s == 1)
      {
            printf("\n");
            s = -1;
      }
    if(n == -1)
    {
      flag = -1;
    }
    else
      flag = -2;

    if(n == -1)
    {
      printf("Test #%d:\n  maximum possible interceptions: %d\n", c++, myset.size());
      s = 1;
      myset.clear();
      continue;
    }
    myset.insert(n);
    it = myset.upper_bound(n);
    if(it != myset.end())
      myset.erase(it);
  }
  
  return 0;
}
