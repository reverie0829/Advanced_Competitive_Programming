#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

class Solution
{
public:
    int myAtoi(string str)
    {
        int ans = 0;
        stringstream input;
        input << str;
        input >> ans;
        return ans;
    }
};
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
}