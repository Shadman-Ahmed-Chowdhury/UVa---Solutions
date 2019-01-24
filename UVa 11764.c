#include<stdio.h>

int main()
{
     int i, j, T, n, high, low, arr[50];

     scanf("%d", &T);
     for(i=1; i<=T; i++)
     {
          high=0;
          low=0;
          scanf("%d", &n);
          for(j=0; j<n; j++)
          {
               scanf("%d", &arr[j]);
          }
          for(j=0; j<n-1; j++)
          {
               if(arr[j]<arr[j+1])
                    high++;
               else if(arr[j]>arr[j+1])
                    low++;
          }
          printf("Case %d: %d %d\n", i, high, low);
     }
     return 0;
}

