#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

class Solution
{
public:
    vector<int> createTargetArray(vector<int> &nums, vector<int> &index)
    {
        vector<int> target;
        int now = -1;
        target.push_back(nums[0]);
        for (int i = 1; i < nums.size(); i++)
        {

            target.insert(target.begin() + (index[i] - index[0]), nums[i]);
        }
        return target;
    }
};

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
}