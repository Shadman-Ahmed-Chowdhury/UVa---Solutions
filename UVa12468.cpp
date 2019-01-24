#include <bits/stdc++.h> 

using namespace std; 

int main()
{
    int a, b, d1, d2; 

    while(1)
    {
        scanf("%d%d", &a, &b); 
        if(a == -1 && b == -1)
            break; 
        if(a == b)
            printf("0\n"); 
        else if(a < b)
        {
            d1= b - a;
            d2= (100 + a) - b; 
            printf("%d\n", min(d1, d2)); 
        }
        else 
        {
            d1 = a - b; 
            d2 = (b + 100) - a;
            printf("%d\n", min(d1, d2)); 
        }
    }
    return 0;
}