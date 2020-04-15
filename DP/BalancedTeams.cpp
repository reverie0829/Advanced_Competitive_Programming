#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int n;
int k;
long long a[5010], dp[5010][5010];
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    memset(a, 0, sizeof(a));
    memset(dp, 0, sizeof(dp));
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1); //a1~an
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << a[i]<<" ";
    // }
    for (int i = 1; i <= k; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            long long value = a[j] - 6;
            int position = upper_bound(a + 1, a + n + 1, value) - (a + 1);
            dp[i][j] = max(dp[i][j - 1], dp[i - 1][position] + (j - position));
        }
    }
    cout << dp[k][n] << endl;
}

// dp[i][j]表示在前j個人，能夠組i個隊伍可以選擇的最大的人數
// dp[i][j] = max(dp[i][j-1], dp[i-1][比第j個人能力值小5的人的位置]+(j-比第j個人能力值小5的人的位置)