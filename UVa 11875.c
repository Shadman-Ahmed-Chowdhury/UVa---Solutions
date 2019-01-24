#include<stdio.h>

int main()
{
     int arr[11], i, T, j, n;

     scanf("%d", &T);
     for(i=1; i<=T; i++)
     {
          scanf("%d", &n);
          for(j=0; j<n; j++)
          {
               scanf("%d", &arr[j]);
          }
          n=(n+1)/2;
          printf("Case %d: %d\n", i, arr[n-1]);
     }
     return 0;
}

