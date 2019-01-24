#include<stdio.h>
#include<string.h>

int main()
{
     int i, j, k, m, c, T, n[100], val, M, len;
     char str[10000], x[100];
     double price;
     scanf("%d\n", &T);
     for(k=1; k<=T; k++)
     {
          price=0.0;
          scanf("%d\n", &val);
          for(i=0; i<val; i++)
          {
               scanf("%c%d\n", &x[i], &n[i]);
          }
          scanf("%d\n", &M);
          for(m=1; m<=M; m++)
          {
               gets(str);
               len=strlen(str);
               for(i=0; i<val; i++)
               {
                    for(c=0; c<len; c++)
                    {
                         if(x[i]==str[c])
                              price+=n[i];
                    }
               }
          }
          printf("%.2lf$\n", price/100);
     }
     return 0;
}

