#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

class Solution
{
public:
    void ans(int num)
    {
        int arr[num];
        memset(arr, 0, sizeof(arr));
        if (num == 1)
            arr[0] = 9;
        else if (num == 2)
        {
            arr[0] = 9;
            arr[1] = 8;
        }
        else if (num >= 3)
        {
            arr[0] = 9;
            arr[1] = 8;
            int print = 9, ptr = 2;
            while (ptr != num)
            {
                arr[ptr++] = (print++)%10;
            }
        }
        for (int i = 0; i < num; i++)
        {
            cout << arr[i];
        }
        cout << endl;
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
        cin >> n;
        s.ans(n);
    }
}
