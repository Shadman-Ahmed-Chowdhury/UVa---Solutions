#include<stdio.h>

int main()
{
     int t, x, n, max, min, d;

     scanf("%d", &t);
     while(t--)
     {
          max=0;
          min=100;
          scanf("%d", &n);
          while(n--)
          {
               scanf("%d", &x);
               if(x>max)
                    max=x;
               if(x<min)
                    min=x;
          }
          d=2*(max-min);

          printf("%d\n", d);
     }
     return 0;
}

