#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

ll pow2(int i)
{
    long long output = 2;
    while(i--)
    {
        output =output*2;
    }
    return output;
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int i = 1;
        int ans;
        bool f = true;
        while(f)
        {
            int cnt;
            cnt = (pow2(i) - 1);
            if (n%cnt==0)
            {
                ans = n / cnt;
                cout << ans << endl;
                f = false;
            }
            ++i;
        }
    }
}