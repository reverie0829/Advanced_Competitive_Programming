#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

class Solution
{
public:
    void ans(ll num)
    {
        ll remain = 0;
        remain = num % 2020;
        if(remain<=num/2020) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
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
        //cout << s.ans(n) << endl;
        s.ans(n);
    }
}
