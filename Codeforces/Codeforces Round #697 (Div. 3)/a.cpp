#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

class Solution
{
    public:
        void ans(ll num)
        {
            bool result = true;
            result = isPowerBy2(num) ;
            if(result==true) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    private:
        bool isPowerBy2(ll n)
        {
            return n > 0 && (n & n - 1) == 0;
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
