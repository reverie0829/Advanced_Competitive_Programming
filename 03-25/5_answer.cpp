#include <bits/stdc++.h>
using namespace std;

int const maxn = 1e3 + 10;
int const MOD = 1000000009;

int N, k, dp[maxn][maxn];

int main()
{
    cin >> N >> k;

    dp[0][0] = dp[1][1] = dp[2][1] = 1;

    for (int i = 2; i <= N; i++)
        for (int j = 2; j <= min(k, i); j++)
            dp[i][j] = (dp[i - 1][j - 1] + dp[i - 2][j - 1]) % MOD;

    int sum = 0;
    for (int j = 0; j <= k; j++)
        sum = (sum + dp[N][j]) % MOD;
    printf("%d\n", sum);

    return 0;
}