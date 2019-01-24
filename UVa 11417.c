#include<stdio.h>

int GCD(int x, int y)
{
     if(x%y==0)
          return y;
     else
          return GCD(y, x%y);
}

int main()
{
     int N, G, i, j;
    while( scanf("%d", &N)!=EOF)
     {
          if(N==0)
               break;
          G=0;
          for(i=1;i<N;i++)
          for(j=i+1;j<=N;j++)
          {
               G+=GCD(i,j);
          }
          printf("%d\n", G);
    }
     return 0;
}

