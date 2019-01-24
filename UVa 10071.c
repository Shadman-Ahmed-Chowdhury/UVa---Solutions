#include<stdio.h>

int main()
{
     int v, t, d;

     while(scanf("%d%d", &v, &t) !=EOF)
     {
          d=v*(t*2);
          printf("%d\n", d);
     }
     return 0;
}

