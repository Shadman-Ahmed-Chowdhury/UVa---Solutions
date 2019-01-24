#include<stdio.h>

int main()
{
     long long int a, b, temp;

     while(scanf("%lld%lld",  &a, &b)!=EOF)
     {
          if(a>b)
          {
               temp=a;
               a=b;
               b=temp;
          }
          printf("%lld\n", b-a);
     }
     return 0;
}
