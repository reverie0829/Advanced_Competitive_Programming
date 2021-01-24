#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

class Solution {
    public:
        int maxArea(vector<int>& height) {
            int result=0,left=0,right=height.size()-1;
            while(left<right){
                result=max(result,min(height.at(left),height.at(right))*(right-left));
                if(height.at(left)<height.at(right)){
                    left++;
                }else right--;
            }
            return result;
        }
};

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    Solution s;
    vector<int> n = {1,8,6,2,5,4,8,3,7};
    cout << s.maxArea(n) << endl;
}
