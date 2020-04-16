#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long
int t, n, m;
ll x;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        cin >> x >> n >> m;
        if (x - m * 10 <= 0)
        {
            x -= m*10;
        }
        else
        {
            while (n != 0)
            {
                x = (x / 2) + 10;
                n--;
            }
            x -= m * 10;
        }
        if (x > 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}