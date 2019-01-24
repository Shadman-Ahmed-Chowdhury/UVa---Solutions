#include <bits/stdc++.h> 

using namespace std; 

int main()
{
    int arr[15];
    int x; 
    int br = 0; 
    while(scanf("%d", &x))
    {
        if(x == 0)
            break; 
        if(br != 0)
            printf("\n"); 
        br++; 
        for(int i = 0; i < x; i++)
            scanf("%d", &arr[i]);
        for(int i = 0; i < x - 5; i++)
        {
            for(int j = i + 1; j < x - 4; j++)
            {
                for(int k = j + 1; k < x - 3; k++)
                {
                    for(int l = k + 1; l < x - 2; l++)
                    {
                        for(int m = l + 1; m < x - 1; m++)
                        {
                            for(int n = m + 1; n < x; n++)
                            {
                                printf("%d %d %d %d %d %d\n", arr[i], arr[j], arr[k], arr[l], arr[m], arr[n]); 
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}