#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

class Solution {
    public:
        string longestCommonPrefix(vector<string>& strs) {
            string result = "";
            if(strs.size()<1) return result;
            for(int i=0;i<strs[0].length();++i){
                char tmp = strs[0][i];
                for(int j=1;j<strs.size();++j){
                    if(i+1>strs[j].length() or tmp!=strs[j][i]) return result;
                }
                result+=tmp;
            }
            return result;
        }
};

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    Solution s;
    vector<string> n ={"flower","flow","flight"} ;
    cout << s.longestCommonPrefix(n) << endl;
}
