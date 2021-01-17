#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if ((n / 2) & 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for (int i = 0; i < (n / 2); i++)
            {
                cout << ((i + 1) * 2) << " ";
            }
            for (int i = 0; i < (n / 2) - 1; i++)
            {
                cout << (i * 2) + 1 << " ";
            }
            cout << (6 * (n / 4)) - 1 << endl;
        }
    }
}