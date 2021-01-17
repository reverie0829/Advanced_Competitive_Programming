#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int const depth = 15;
int q[15];
void dfs(int i, long long res)
    {
        if (i > depth)
        {
            for (int j = 1; j <= depth; j++)
                printf("%d %c ", q[j], (j != depth) ? '*' : '=');
            printf("%lld\n", res);

            return;
        }

        for (int j = 1; j <= depth; j++)
        {
            q[i] = j;
            dfs(i + 1, res * j);
        }
    }

int main()
{    
    dfs(1, 1);
}