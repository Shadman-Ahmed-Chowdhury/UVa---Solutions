#include <bits/stdc++.h>

using namespace std;

int main()
{
    double n, p;

    while(scanf("%lf\n%lf", &n, &p) != EOF) {
        double a = log(p) / n;
        //cout << a << endl;
        double k = exp(a);
        printf("%.0lf\n", k);
    }
    return 0;
}

