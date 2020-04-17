#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

class Solution
{
public:
    int countLargestGroup(int n)
    {
        int cnt[37], ans = 1;
        memset(cnt, 0, sizeof(cnt));
        for (int i = 1; i <= n; i++)
        {
            int mod = 0;
            int a = i;
            while (a)
            {
                mod += a % 10;
                a = a / 10;
            }
            cnt[mod]++;
        }
        sort(cnt, cnt + 37, greater<int>());
        for (int i = 1; i < 37; i++)
        {
            if (cnt[i] != cnt[i - 1])
            {
                break;
            }
            ans++;
        }
        return ans;
    }
};