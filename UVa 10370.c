#include<stdio.h>

int main()
{
     int i, T, count, j, arr[1002], n, sum;
     float avg, p;
     scanf("%d", &T);
     for(j=1; j<=T; j++)
     {
          sum=0;
          count=0;
          scanf("%d", &n);
          for(i=0; i<n; i++)
          {
               scanf("%d", &arr[i]);
               sum=sum+arr[i];
          }
          avg=sum/n;
          for(i=0; i<n; i++)
          {
               if(arr[i]>avg)
                    count++;
          }
          p=(float)count/ (float)n;
          printf("%.3f%%\n", p*100);
     }
     return 0;
}

