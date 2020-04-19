#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

class Solution {
public:
    int findMinFibonacciNumbers(int k) {
        vector<long long> f = {1, 1};
        for (int i = 1; f[i] < k; ++i)
            f.push_back(f[i] + f[i - 1]);
        int ret = 0;
        for (int i = f.size() - 1; k; --i) {
            ret += k / f[i];
            k %= f[i];
        }
        return ret;
    }
};

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
}