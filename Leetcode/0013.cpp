#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

class Solution 
{
    public:
        int romanToInt(string s) 
        {
            unordered_map<char, int> roman_dict = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
            int res = 0, left = 0;
            for (auto ch : s)
            {
                auto right = roman_dict[ch];
                if (left < right) res += (right - 2*left);
                else res += right;
                left = right;
            }
            return res;
        }
};

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    Solution s;
    string n="IX";
    cout << s.romanToInt(n) << endl;
}
