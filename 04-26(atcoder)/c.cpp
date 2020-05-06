#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;
    cin >> n;
    set<string> cnt;
    while (n--)
    {
        string s;
        cin >> s;
        cnt.insert(s);
    }
    cout << cnt.size()<<endl;
}