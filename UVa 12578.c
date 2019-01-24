#include<stdio.h>
#include<math.h>
int main()
{
     int L, i, T;
     double b, r, Area_C, Area_R, d;
     double pi;
     pi=acos(-1);
     scanf("%d",  &T);
     for(i=1; i<=T; i++)
     {
          scanf("%d", &L);
          b=0.6* L;
          r=(float)L /5.0;

          Area_C=pi*(r*r);
          Area_R=L*b;

          d=Area_R - Area_C;

          printf("%.2f %.2f\n", Area_C, d);
     }
     return 0;

}

