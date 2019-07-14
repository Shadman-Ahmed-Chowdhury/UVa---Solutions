#include <bits/stdc++.h>

using namespace std;

long long factorial(long long n) {
    if(n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    long long n;
    while(scanf("%lld", &n) != EOF) {
        if(n < 0){
            n *= (-1);
            if(n % 2 == 1)
                printf("Overflow!\n");
            else
                printf("Underflow!\n");
        }
        else if(n < 8)
            printf("Underflow!\n");
        else if(n > 13)
            printf("Overflow!\n");
        else
            cout << factorial(n) << endl;
    }
    return 0;
}
