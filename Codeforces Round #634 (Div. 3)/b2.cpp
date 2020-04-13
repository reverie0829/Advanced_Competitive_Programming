#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    long long t;
    cin >> t;
    while(t--)
    {
        int n, a, b;
        cin >> n;
        cin >> a;
        cin >> b;
        vector<char> en;
        string eng = "abcdefghijklmnopqrstuvwxyz";
        string ans;
        int j = 0;
        while(ans.length()!=n)
        {
            if (ans.length()==0)
                ans = ans.assign(eng,0,b);
            if(ans.length()<n)
            {
                ans = ans.append(ans, j, 1);
                j++;
            }
        }
        cout << ans << endl;
    }
}