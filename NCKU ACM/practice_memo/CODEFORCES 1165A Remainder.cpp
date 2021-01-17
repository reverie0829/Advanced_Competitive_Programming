#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long
//CODEFORCES 1165A Remainder

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n, x, y;
    string s;
    cin >> n >> x >> y;
    cin >> s;
    int ans = 0;
    int now = 0; // 當前的位數
    for (int i = n - 1; i >= 0; i--)
    {
        if (now >= x)
            break; // 大於等於 x 不予考慮
        //除了第y位 其他的地方都不能有1，第y位一定要有1
        if (now == y)
        {
            if (s[i] != '1')
            {
                ans++;
            }
        }
        else
        {
            if (s[i] == '1')
            {
                ans++;
            }
        }
        now++;
    }
    cout << ans << endl;
    return 0;
}
