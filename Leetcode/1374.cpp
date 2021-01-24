#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

class Solution
{
public:
    string generateTheString(int n)
    {
        string ans = "";
        if (n & 1)
        {
            for (int i = 0; i < n; i++)
                ans += "a";
        }
        else
        {
            for (int i = 0; i < n - 1; i++)
                ans += "a";
            ans += "b";
        }
        return ans;
    }
};

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
}