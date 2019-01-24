#include <bits/stdc++.h>

using namespace std;

bool is_five(int n)
{
    int c;
    set <int> s;
    if(n > 9999)
        c = 5;
    else
        c = 4;
    int rem;
    while(n != 0)
    {
        rem = n % 10;
        n = n / 10;
        s.insert(rem);
    }
    if(s.size() == c)
        return true;
    else
        return false;
}
bool is_ten(int x, int y)
{
    set <int> s;
    int rem;
    if(y <= 9999)
    {
        while(x != 0)
        {
            rem = x % 10;
            x = x / 10;
            if(rem == 0)
                continue;
            else
                s.insert(rem);
        }
        while(y != 0)
        {
            rem = y % 10;
            y = y / 10;
            if(rem == 0)
                continue;
            else
                s.insert(rem);
        }
        if(s.size() == 9)
            return true;
        else
            return false;
    }

    else
    {
        while(x != 0)
        {
            rem = x % 10;
            x = x / 10;
            s.insert(rem);
        }
        while(y != 0)
        {
            rem = y % 10;
            y = y / 10;
            s.insert(rem);
        }
        if(s.size() == 10)
            return true;
        else
            return false;
    }
}
int main()
{
    int n, t = 0; 
    while(scanf("%d", &n))
    {
        if(n == 0)
            break;
        if(t != 0)
            printf("\n"); 
        int flag = 0;
        for(int i = 1000; i < 100000; i++)
        {
            if(is_five(i))
            {
                int x = i * n;
                if(x < 100000)
                {
                      if(is_ten(x, i))
                      {
                          flag = 1;
                          if(i < 10000)
                              printf("%d / 0%d = %d\n", x, i, n);
                          else
                              printf("%d / %d = %d\n", x, i, n);
                      }
                }
            }
        }
        if(flag == 0)
            printf("There are no solutions for %d.\n", n);
        t++; 
    }
    return 0;
}
