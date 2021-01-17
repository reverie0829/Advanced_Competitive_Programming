#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> a;

    for (int i = 9; i >= 2; i--)
    {
        if (n % i == 0)
        {
            n /= i;
            a.push_back(i);
            i++;
        }
    }

    if (n > 1)
    {
        cout << "-1";
        return 0;
    }
    for (int i = a.size() - 1; i >= 0; i--)
        cout << a[i];

    cout << endl;
    return 0;
}