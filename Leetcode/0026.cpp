#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long


class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            if(nums.empty()) return 0;
            int i = 0;
            for(int j=1;j<nums.size();++j){
                if(nums[j]!=nums[i]){
                    i++;
                    nums[i]=nums[j];
                }
            }
            return i+1;
        }
};

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    return 0;
}
