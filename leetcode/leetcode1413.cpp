#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int x = 0, mn = 0;
        for (int t : nums) {
            x += t;
            mn = min(mn, x);
        }
        return 1 - mn;
    }
};

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
}