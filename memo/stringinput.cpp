#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int T;
int n;
int main()
{
    //std::ios_base::sync_with_stdio(false);
    //std::cin.tie(NULL);

    string s;
    //cin >> T;
    while (getline(cin, s))
    {

        cin >> n;
        cout << s << " " << n << endl;
        cin.ignore();
    }
}