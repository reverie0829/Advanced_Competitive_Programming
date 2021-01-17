#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(n + 1);
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 1e9));
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    for (int i = 1; i < n; i++)
        dp[i][i] = dp[i][i + 1] = 0; //至少三個相乘
    for (int i = 1; i < n; i++)//j+i是最右的下標
        for (int j = 1; j + i <= n; j++)//最左的下標
            for (int k = j; k < j + i; k++)
            {
                dp[j][j + i] = min(dp[j][j + i], dp[j][k] + dp[k][j + i] + v[j] * v[k] * v[j + i]);
                //cout <<"dp["<<j<<"]["<<j + i<<"]:"<< dp[j][j + i] << "   j:" << j << "   i:" << i << "   k:" << k << endl;
            }

    cout << dp[1][n] << endl;
}