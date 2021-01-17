#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

class Solution
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {
        int cnt[101], output = 0;
        vector<int> ans;
        memset(cnt, 0, sizeof(cnt));
        for (int i = 0; i < nums.size(); i++)
        {
            cnt[nums[i]]++;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums[i]; j++)
            {
                output += cnt[j];
            }
            ans.push_back(output);
            output = 0;
        }
        return ans;
    }
};

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
}