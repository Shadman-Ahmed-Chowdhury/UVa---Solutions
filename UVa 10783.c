#include<stdio.h>

int main()
{
     int a, b, i, j, T, sum;

     scanf("%d", &T);
     for(j=1; j<=T; j++)
     {
          sum=0;
          scanf("%d%d", &a, &b);

          for(i=a; i<=b; i++)
               if(i%2!=0)
                    sum=sum+i ;

          printf("Case %d: %d\n", j, sum);
     }


     return 0;
}

