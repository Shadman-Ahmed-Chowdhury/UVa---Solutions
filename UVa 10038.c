#include<stdio.h>
#include<math.h>

int main()
{
     int arr[3000], diff[2999], n, i, d;

     while(scanf("%d", &n))
     {
          for(i=0; i<n; i++)
               scanf("%d", &arr[i]);
          for(i=1; i<n; i++)
               diff[i]=0;

          for(i=0; i<n-1; i++)
          {
               d=abs(arr[i]-arr[i+1]);
               if(d<1 || d>n-1 || diff[d]==1)
               {
                    printf("Not jolly\n");
                    break;
               }
               diff[d]=1;
          }
          if(i==n-1)
               printf("Jolly\n");
     }
     return 0;
}
