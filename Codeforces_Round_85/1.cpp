#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int number;
    cin >> number;
    while (number--)
    {
        int test, a = 0, b = 0;
        bool output = true;
        cin >> test;
        cin >> a >> b;
        if (a < b)
        {
            output = false;
        }

        for (int i = 1; i < test; i++)
        {
            int c, d;
            cin >> c >> d;
            if (c < a)
            {
                output = false;
            }
            if (d < b)
            {
                output = false;
            }
            
            int ac = c - a;
            int db = d - b;
            if (ac < db)
            {
                output = false;
            }
            a = c;
            b = d;
        }
        if (output)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}