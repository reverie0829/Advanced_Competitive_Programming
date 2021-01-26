#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        dfs(result,"",0,0,n);
        return result;
    }
private:
    void dfs(vector<string> &result, string str, int left, int right, int n){
        if(left+right==2*n){
            result.push_back(str);
            return;
        }
        if(left<n) dfs(result,str+"(",left+1,right,n);
        if(right<left) dfs(result,str+")",left,right+1,n);
    }
};

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    return 0;
}
