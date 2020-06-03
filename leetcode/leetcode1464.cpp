#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); ++i)
        {
            cout<<nums[i]<<endl;
        }
        cout<<(nums[nums.size()-1]-1)*(nums[nums.size()-2]-1)<<endl;
        return (nums[nums.size()-1]-1)*(nums[nums.size()-2]-1);
    }
};

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    Solution s;
    vector<int> nums={3,4,5,2};
    s.maxProduct(nums);
}