#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t, x, n, m;
    cin >> t;
    while (t--)
    {
        cin >> x >> n >> m;
        for (int i = 1; i <= n; i++)
        {
            if (x / 2 + 10 < x)
                x = x / 2 + 10;
            else
                break;
        }
        if (x <= m * 10)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}