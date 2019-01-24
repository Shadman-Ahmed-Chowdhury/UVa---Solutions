#include<stdio.h>

int main()
{
     int x, a[10000], i, count, j;

     while(scanf("%d", &x)!=EOF)
     {
          i=0;
          count=0;
          if(x==0)
               break;
          while(x!=0)
          {
              if(x&1)
              {
                   a[i++]=1;
                   count++;
              }
              else
                    a[i++]=0;
               x=x>>1;
          }
          printf("The parity of ");
          for(j=i-1; j>=0; j--)
          {
               printf("%d", a[j]);
          }
          printf(" is %d (mod 2).\n", count);
     }
     return 0;
}

