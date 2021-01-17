#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
const int maxn = 1e5 + 7;
int T, a[101], cunt = 0, dp[101];
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    memset(dp, 0, sizeof(dp));
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int c;
        cin >> c;
        if (c == 1)
        {
            a[i] = -1, cunt++;
        }
        else
        {
            a[i] = 1;
        }
    }
    dp[0] = a[0];
    int maxc = a[0];
    for (int i = 1; i < T; i++)
        dp[i] = max(dp[i - 1] + a[i], a[i]), maxc = max(maxc, dp[i]);
    cout<<maxc<<" "<<cunt<<endl;
    cout << maxc + cunt << endl;
    return 0;
}
