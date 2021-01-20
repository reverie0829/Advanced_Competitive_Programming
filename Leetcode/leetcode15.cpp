#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

class Solution {
    public:
        vector<vector<int>> threeSum(vector<int>& nums) {
            vector<vector<int>> result;
            sort(nums.begin(),nums.end());
            int left=0,right=0,sum=0;
            for (int i=0;i<nums.size()-2;++i){
                if(i==0 or (i>0 && nums[i]!=nums[i-1])){
                    left=i+1,right=nums.size()-1,sum=0-nums[i];
                    while(left<right){
                        if(nums[left]+nums[right]==sum){
                            result.push_back({nums[i],nums[left],nums[right]});
                            while(left<right && nums[left]==nums[left+1]) left++;
                            while(left<right && nums[right]==nums[right-1]) right++;
                            left++;right--;
                        }else if(nums[left]+nums[right]<sum) left++;
                        else right--;
                    }
                }
            }
            return result;
        }
};

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    Solution s;
    vector<int> n={-1,0,1,2,-1,-4};
    for (auto i :s.threeSum(n)){
        for (auto j : i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
