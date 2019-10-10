#include <bits/stdc++.h>

using namespace std;

vector <int> two, four, six, eight;

void calculate()
{
    for(int i = 0; i < 100000; i++) {
        int n = i * i;
        if(n < 100) {
            int p = 10;
            int x = n / p;
            int y = n % p;
            int n1 = (x + y) * (x + y);
            if(n == n1)
                two.push_back(n);
        }
        else if(n <= 9999) {
            int p = 100;
            int x = n / p;
            int y = n % p;
            int n1 = (x + y) * (x + y);
            if(n == n1)
                four.push_back(n);
        }
        else if(n <= 999999) {
            int p = 1000;
            int x = n / p;
            int y = n % p;
            int n1 = (x + y) * (x + y);
            if(n == n1)
                six.push_back(n);
        }
        else if(n <= 99999999) {
            int p = 10000;
            int x = n / p;
            int y = n % p;
            int n1 = (x + y) * (x + y);
            if(n == n1)
                eight.push_back(n);
        }
        else
            continue;
    }
}

int main()
{
    calculate();
    int n;
    while(cin >> n) {
        if(n == 2) {
            for(int i = 0; i < two.size() - 1; i++)
                cout << setw(n) << setfill('0') << two[i] << endl;
        }
        else if(n == 4) {
            cout << "0000\n";
            cout << "0001\n";
            for(int i = 0; i < four.size(); i++)
                cout << setw(n) << setfill('0') << four[i] << endl;
        }
        else if(n == 6) {
            cout << "000000\n";
            cout << "000001\n";
            for(int i = 0; i < six.size(); i++) {
                cout << setw(n) << setfill('0') << six[i] << endl;
            }
        }
        else if(n == 8) {
            cout << "00000000\n";
            cout << "00000001\n";
            for(int i = 0; i < eight.size(); i++) {
                cout << setw(n) << setfill('0') << eight[i] << endl;
            }
        }

    }
    return 0;
}

