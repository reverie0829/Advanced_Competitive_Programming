#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;
    ll ans = 0;
    cin >> n;
    for (int i = 2; i <= n - 1; i++)
    {
        ans += i * (i + 1);
    }
    cout << ans << endl;
}