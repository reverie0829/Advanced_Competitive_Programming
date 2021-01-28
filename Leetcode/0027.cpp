#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long


class Solution {
    public:
        int removeElement(vector<int>& nums, int val) {
            int left=0;
            int right=nums.size();
            while(left<right){
                if(nums[left]==val){
                    nums[left]=nums[right-1];
                    right--;
                }else left++;
            }
            return right;
        }
};

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int arr[] = { 3, 2, 2, 3};
    vector<int> vec(arr, arr + sizeof(arr) / sizeof(int));
    int val = 2;
    int ret = Solution().removeElement(vec, val);
    cout << ret << endl;
    return 0;
}
