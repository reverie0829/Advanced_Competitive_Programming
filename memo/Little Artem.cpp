#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int m, n;
    cin >> m >> n;
    int black = 1;
    int white = 1;
    char p[m][n];
    if ((m * n) % 2 == 1)
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (black == 1)
                {
                    p[i][j] = 'B';
                    black = 0;
                    cout << p[i][j];
                }
                else if (black == 0)
                {
                    p[i][j] = 'W';
                    black = 1;
                    cout << p[i][j];
                }
                if (j == n - 1)
                {
                    cout << endl;
                }
            }
        }
    }
    else if (m % 2 == 0 && n % 2 == 0 && (m * n) % 2 == 0)
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == m - 1 && j == n - 1)
                {
                    p[i][j] = 'B';
                    cout << p[i][j];
                    break;
                }
                if (white == 1)
                {
                    p[i][j] = 'W';
                    white = 0;
                    cout << p[i][j];
                }
                else if (white == 0)
                {
                    p[i][j] = 'B';
                    white = 1;
                    cout << p[i][j];
                }
                if (j == n - 1)
                {
                    cout << endl;
                }
            }
            if ((i % 2) == 1)
            {
                white = 1;
            }
            else if ((i % 2) == 0)
            {
                white = 0;
            }
        }
    }
    else
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == m - 1 && j == n - 1)
                {
                    p[i][j] = 'B';
                    cout << p[i][j];
                    break;
                }
                if (black == 1)
                {
                    p[i][j] = 'B';
                    black = 0;
                    cout << p[i][j];
                }
                else if (black == 0)
                {
                    p[i][j] = 'W';
                    black = 1;
                    cout << p[i][j];
                }
                if (j == n - 1)
                {
                    cout << endl;
                }
            }
            if ((i % 2) == 1)
            {
                black = 1;
            }
            else if ((i % 2) == 0)
            {
                black = 0;
            }
        }
    }
}
