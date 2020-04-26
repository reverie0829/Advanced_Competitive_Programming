#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

class Solution
{
public:
    int maxScore(string s)
    {
        int ans = 0, n = s.size(), cnt0, cnt1;
        for (int k = 0; k < n - 1; k++)
        {
            cnt0 = cnt1 = 0;
            for (int i = 0; i <= k; i++)
            {

                if (s[i] == '0')
                {
                    cnt0++;
                }
            }
            for (int j = k + 1; j < n; j++)
            {

                if (s[j] == '1')
                {
                    cnt1++;
                }
            }
            cout << cnt0 << " " << cnt1 << " " << endl;
            ans = max(ans, cnt0 + cnt1);
        }
        return ans;
    }
};

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    Solution su;
    string s = "011101";
    cout << su.maxScore(s) << endl;
}