#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;
    cin >> n;
    while (n--)
    {
        int a;
        string b;
        cin >> a >> b;
        if (a == 2 && b[0] >= b[1])
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << "2" << endl;
            string ans = "";
            for (int i = 1; i < a; i++)
            {
                ans += b[i];
            }
            cout << b[0] << " " << ans << endl;
        }
    }
}