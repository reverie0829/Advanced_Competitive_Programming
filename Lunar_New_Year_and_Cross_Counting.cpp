#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    char mx[500][500];
    int result = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char c;
            cin >> c;
            mx[i][j] = c;
        }
    }
    for (int i = 1; i < n - 1; i++)
    {
        for (int j = 1; j < n - 1; j++)
        {
            if (mx[i][j] == 'X')
            {
                if (mx[i - 1][j - 1] == 'X' && mx[i - 1][j + 1] == 'X' && mx[i + 1][j - 1] == 'X' && mx[i + 1][j + 1] == 'X')
                {
                    result++;
                }
            }
        }
    }
    cout << result;
}