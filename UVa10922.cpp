#include <bits/stdc++.h>

using namespace std;

int main()
{
    string num, line;
    int sum, deg;
    while(cin >> num)
    {
        sum = 0;
        if(num[0] == '0')
            break;
        for(int i = 0; i < num.size(); i++)
            sum = sum + (num[i] - 48);
        deg = 1;
        int a;
        while(sum > 9)
        {
            deg++;
            a = sum;
            sum = 0;
            while(a > 0)
            {
                sum += a % 10;
                a = a / 10;
            }
        }
        if(sum == 9)
        {
            cout << num << " is a multiple of 9 and has 9-degree " << deg << ".\n";
        }
        else
            cout << num << " is not a multiple of 9." << endl;
    }
}

