#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int,int> diff; 
            for(int i=0;i<nums.size();++i){
                if(diff.count(target-nums[i])){
                    return {diff[target-nums[i]],i};
                }
                diff[nums[i]]=i;
            }
            return {};
        }
};

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    Solution s;
    vector<int> nums={2,7,11,15};
    cout << s.twoSum(nums,9) << endl;
}
