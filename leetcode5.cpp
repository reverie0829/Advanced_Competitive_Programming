#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

class Solution
{
public:
    int ans(int num)
    {
        int sum=0;
        for(int i=1;i<=num;i++){
            sum+=i;
        }
        return sum;
    }
};

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    Solution s;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin>>n;
        cout << s.ans(n) << endl;
    }
}
