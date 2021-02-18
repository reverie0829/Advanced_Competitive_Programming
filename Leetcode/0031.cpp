#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long
static int x = [](){std::ios::sync_with_stdio(false);cin.tie(NULL);return 0;}();

class Solution {
    public:
        void nextPermutation(vector<int>& nums) {
            int i = nums.size()-2;
            while(i>=0 and nums[i+1]<=nums[i]) i--;
            //如果到了最左邊
            if(i<0){
                reverse(nums,0);
                return;
            }
            //找到剛好大於 nums[i]的位置
            int j = nums.size()-1;
            while(j>=0 and nums[j]<=nums[i]) j--;
            //交換
            swap(nums,i,j);
            //倒序
            reverse(nums,i+1);
        }
    private:
        void swap(vector<int>& nums,int i,int j){
            int tmp = nums[j];
            nums[j] = nums[i];
            nums[i] = tmp;
        }

        void reverse(vector<int>& nums,int start){
            int i = start, j = nums.size()-1;
            while(i<j){
                swap(nums,i,j);
                i++;
                j--;
            }
        }
};

int main(){
    vector<int> arr = { 3, 2, 2, 3};
    Solution().nextPermutation(arr);
    return 0;
}
