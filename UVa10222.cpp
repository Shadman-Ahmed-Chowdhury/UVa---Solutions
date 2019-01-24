#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    char keyboard[] = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', 91, 93, 92, 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 59, 39,
                        'z', 'x', 'c', 'v', 'b', 'n', 'm', 44, 46, 47, '`', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', 45, 61};
    string str;
    while(getline(cin, str))
    {
        for(int i = 0; i < str.size(); i++)
        {
            if(str[i] >= 'A' && str[i] <= 'Z')
                str[i] = str[i] + 32;
            if(str[i] == ' ' || str[i] == '\n')
                cout << str[i];
            else{
                for(int j = 0; j < 47; j++)
                {
                    if(str[i] == keyboard[j])
                    {
                        cout << keyboard[j - 2];
                        break;
                    }
                }
            }
        }
        cout << endl;
    }
}