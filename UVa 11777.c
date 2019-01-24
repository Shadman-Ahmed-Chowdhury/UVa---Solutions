#include<stdio.h>

int average(int a, int b, int c)
{
      int sum, avg;

     if(a<=b && a<=c)
          sum=b+c;
     else if(b<=c && b<=a)
          sum=c+a;
     else
          sum=a+b;
     avg= sum/2;

     return avg;
}

int main()
{
     int i, T, Term1, Term2, Final, Attendance, CT1, CT2, CT3, Avg, sum;

     scanf("%d", &T);
     for(i=1; i<=T; i++)
     {
          scanf("%d%d%d%d%d%d%d", &Term1, &Term2, &Final, &Attendance, &CT1, &CT2, &CT3);
          Avg=average(CT1, CT2, CT3);
          sum=Term1 + Term2 + Final + Attendance + Avg;

          if(sum>=90)
               printf("Case %d: A\n", i);
          else if(sum>=80 && sum<90)
               printf("Case %d: B\n", i);
          else if(sum>=70 && sum<80)
               printf("Case %d: C\n", i);
          else if(sum>=60 && sum<70)
               printf("Case %d: D\n", i);
          else
               printf("Case %d: F\n", i);
     }
     return 0;
}

