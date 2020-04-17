#include <bits/stdc++.h>
#define endl '\n' 
using namespace std;

class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cnt=0,val=0;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            cnt+=nums[i];
        }
        for(int i=nums.size()-1;i>=0;i--){
            cnt-=nums[i];
            val+=nums[i];
            if(val>cnt) {
                ans.push_back(nums[i]);
                break;
            }
            else{
                ans.push_back(nums[i]);;
            }
        } return ans;       
    }
};