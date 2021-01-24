#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

class Solution
{
public:
    int findLucky(vector<int> &arr)
    {
        int cnt[501];
        int ans = -1;
        memset(cnt, 0, sizeof(cnt));
        for (int i = 0; i < arr.size(); i++)
        {
            cnt[arr[i]]++;
        }
        for (int i = 1; i <= 500; i++)
        {
            if (cnt[i] == i && i >= ans)
            {
                ans = i;
            }
        }
        return ans;
    }
};

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
}