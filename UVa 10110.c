#include<stdio.h>
#include<math.h>

int main()
{
     long long n, sq;

     while(scanf("%lld", &n)!=EOF)
     {
          if(n==0)
               break;
          sq=sqrt(n);

          if(n==sq*sq)
               printf("yes\n");
          else
               printf("no\n");
     }
     return 0;
}

