#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    long long t, n;
    long long p[100005];
    cin >> t;
    while (t--)
    {
        memset(p, 0, sizeof(p));
        cin >> n;
        for (long long i = 1; i <= n;i++)
        {
            cin >> p[i];
        }
        sort(p+1, p+n+1);
        long long cnt = 0;
        long long now = (n + 1) / 2;
        while (cnt <n)
        {
            cnt++;
            cout << p[now]<<" ";
            if (cnt&1)
            {
                now += cnt;
            }
            else
            {
                now -= cnt;
            }
        }
        cout << endl;
    }
}