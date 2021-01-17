#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int cnt = 2;
        while (1)
        {
            if (n % ((1 << cnt) - 1) == 0)
            {
                cout << (n / ((1 << cnt) - 1)) << endl;
                break;
            }
            cnt++;
        }
    }
}