#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

ll me[110][110][110];
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int l, w;
    cin >> w >> l;

    memset(me, 0, sizeof(me));

    me[1][l][w] = 1;
    for (int n = 1; n <= 73; n++)
    {
        for (int i = l; i >= 1; i--)
        {
            for (int j = w; j >= 1; j--)
            {
                if (!(n == 1 && i == l && j == w))
                    me[n][i][j] = (me[n - 1][i][j + 1] + me[max(n - 2, 0)][i][j] + me[n][i + 1][j] + me[n][i][j + 1]) % 48763;
            }
        }
    }

    for (int i = l; i >= 1; i--)
    {
        for (int j = w; j >= 1; j--)
        {
            me[75][i][j] = (me[73][i][j] + me[75][i + 1][j] + me[75][i][j + 1]) % 48763;
        }
    }
    for (int i = l; i >= 1; i--)
    {
        for (int j = w; j >= 1; j--)
        {
            me[76][i][j] = (me[75][i][j + 1] + me[76][i + 1][j] + me[76][i][j + 1]) % 48763;
        }
    }

    for (int n = 77; n <= 99; n++)
    {
        for (int i = l; i >= 1; i--)
        {
            for (int j = w; j >= 1; j--)
            {
                me[n][i][j] = (me[n - 1][i][j + 1] + me[n - 2][i][j] + me[n][i + 1][j] + me[n][i][j + 1]) % 48763;
            }
        }
    }

    ll total = 0;
    for (int i = l; i >= 1; i--)
    {
        for (int j = w; j >= 1; j--)
        {
            me[100][i][j] = (me[99][i][j + 1] + me[98][i][j] + me[100][i + 1][j] + me[100][i][j + 1]) % 48763;
            total += (me[100][i][j] % 48763);
        }
    }
    cout << total % 48763;
}