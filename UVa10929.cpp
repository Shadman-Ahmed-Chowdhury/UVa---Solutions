#include <bits/stdc++.h>

using namespace std;

int main()
{
    string num, line;
    int sum;
    while(getline(cin, line))
    {
        num = "";
        for(int i = 0; i < line.size(); i++)
        {
            if(line[i] == ' ')
                continue;
            else
                num = num + line[i];
        }
        if(num == "0")
            break;
        sum = 0;
        for(int i = 0; i < num.size(); i++)
        {
            if(i % 2 == 0)
                sum = sum + (num[i] - 48);
            else
                sum = sum - (num[i] - 48);
        }
        if(sum % 11 == 0)
            cout << num << " is a multiple of 11.\n";
        else
            cout << num << " is not a multiple of 11.\n";
    }
}
