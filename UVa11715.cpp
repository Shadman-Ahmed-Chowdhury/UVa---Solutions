#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, T = 1;
    double a, s, t, u, v;
    while(1)
    {
        scanf("%d", &n);
        if(n == 0)
            break;
        printf("Case %d: ", T++);
        if(n == 1)
        {
            scanf("%lf%lf%lf", &u, &v, &t);
            a = (v-u)/t;
            s = (u+v)*t/2;
            printf("%.3lf %.3lf\n", s, a);
        }
        else if(n == 2)
        {
            scanf("%lf%lf%lf", &u, &v, &a);
            t = (v-u)/a;
            s = (u+v)*t/2;
            printf("%.3lf %.3lf\n", s, t);
        }
        else if(n == 3)
        {
            scanf("%lf%lf%lf", &u, &a, &s);
            v = sqrt(u*u + 2*a*s);
            t = (v-u)/a;
            printf("%.3lf %.3lf\n", v, t);
        }
        else
        {
            scanf("%lf%lf%lf", &v, &a, &s);
            u = sqrt(v*v - 2*a*s);
            t = (v-u)/a;
            printf("%.3lf %.3lf\n", u, t);
        }
    }
    return 0;
}
