#include <bits/stdc++.h>

using namespace std;
int game(int a, int b)
{
    if(b == 0)
        return 0;
    if(a / b > 1)
        return 1;
    return game(b, a-b) + 1;
}

int main()
{
    int a, b, ans;
    while(scanf("%d%d", &a, &b))
    {
        if(a == 0 && b == 0)
            break;
        if(a < b)
            swap(a, b);
        ans = game(a, b);
        if(ans & 1)
            printf("Stan wins\n");
        else
            printf("Ollie wins\n");
    }
    return 0;
}
