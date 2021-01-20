#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

class Solution {
    public:
        int threeSumClosest(vector<int>& nums, int target) {
            if(nums.size() < 3) return 0;
            int closest = nums[0]+nums[1]+nums[2];
            sort(nums.begin(), nums.end());
            for(int first = 0 ; first < nums.size()-2 ; ++first) {
                if(first > 0 && nums[first] == nums[first-1]) continue;
                int second = first+1;
                int third = nums.size()-1;            
                while(second < third) {
                    int curSum = nums[first]+nums[second]+nums[third];
                    if(curSum == target) return curSum;
                    if(abs(target-curSum)<abs(target-closest)) {
                        closest = curSum;
                    }
                    if(curSum > target) {
                        --third;
                    } else {
                        ++second;
                    }
                }
            }
            return closest;
        }
};

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    Solution s;
    int n=1;
    vector<int> nums = {-1,2,1,-4};
    cout << s.threeSumClosest(nums,n) << endl;
}
