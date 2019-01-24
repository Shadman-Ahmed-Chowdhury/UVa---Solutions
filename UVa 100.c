#include<stdio.h>

long long cycle(long long n)
{
     long long count=0;
     while(1)
     {
          count++;
          if(n==1)
               break;
          if(n&1)
               n=(3*n)+1;
          else
               n=n/2;
     }
     return count;
}
long long max_cycle(long long a, long long b)
{
     long long max=0, c;
     if(a>b)
          return max_cycle(b, a);
     while(a<=b)
     {
          c=cycle(a);
          if(max<c)
               max=c;
          a++;
     }
     return max;
}

int main()
{
     long long a, b, c;
     while(scanf("%lld%lld", &a, &b)!=EOF)
     {
          c=max_cycle(a, b);
          printf("%lld %lld %lld\n", a, b, c);
     }
     return 0;
}
