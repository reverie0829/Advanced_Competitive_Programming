#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

class Solution 
{
public:
    bool isPalindrome(int x) 
    {
        string x_str = to_string(x);
        return equal(x_str.begin(), x_str.begin() + x_str.size()/2, x_str.rbegin());
    }
};

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    Solution s;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        cout << s.isPalindrome(n) << endl;
    }
}
