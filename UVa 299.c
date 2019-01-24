#include<stdio.h>

int main()
{
    int i, j, arr[100], T, k, L, count, temp;

    scanf("%d", &T);
    while(T--)
    {
        count=0;
        scanf("%d", &L);
        for(i=0; i<L; i++)
        {
            scanf("%d", &arr[i]);
        }
        for(i=0; i<L-1; i++)
        {
            for(j=i+1; j<L; j++)
            {
                if(arr[i]>arr[j])
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                    count++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n", count);
    }
}

