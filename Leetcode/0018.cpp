#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

class Solution {
    public:
        vector<vector<int>> fourSum(vector<int>& nums, int target) {
            vector<vector<int>> result;
            int len=nums.size();
            if (len<4) return result;
            sort(nums.begin(),nums.end());
            for(int i=0;i<len-3;++i){
                if(i>0 && nums[i]==nums[i-1]) continue;
                if(nums[i]+nums[i+1]+nums[i+2]+nums[i+3]>target) break;
                if(nums[i]+nums[len-3]+nums[len-2]+nums[len-1]<target) continue;
                for(int j=i+1;j<len-2;++j){
                    if(j>i+1 && nums[j]==nums[j-1]) continue;
                    if(nums[i]+nums[j]+nums[j+1]+nums[j+2]>target) break;
                    if(nums[i]+nums[j]+nums[len-2]+nums[len-1]<target) continue;
                    int left=j+1 ,right=len-1;
                    while(left<right){
                        int sum = nums[i]+nums[j]+nums[left]+nums[right];
                        if(sum<target) left++;
                        else if (sum>target) right--;
                        else{
                            result.push_back({nums[i],nums[j],nums[left],nums[right]});
                            //while(left<right && nums[left]==nums[left-1]) left++;
                            //while(left<right && nums[right]==nums[right+1]) right--;
                            //left++;right--;
                            do{left++;}while(nums[left]==nums[left-1]&&left<right);
                            do{right--;}while(nums[right]==nums[right+1]&&left<right);
                        }
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
    vector<int> n={1,0,-1,0,-2,2};
    int target = 0;
    for (auto i :s.fourSum(n,target)){
        for (auto j : i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
