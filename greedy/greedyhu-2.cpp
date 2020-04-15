#include <bits/stdc++.h>
#define endl '\n' 
using namespace std;
#define ll long long
#define inf 1000000000
int a[55];
//int dp[55][55];
int cnt(int x, int y)
{
    if (y == x + 1)
        return 0;
    //if (dp[x][y] > 0)
        //return dp[x][y];
    int min = inf;
    for (int i = x + 1; i < y; i++)
    {
        int now = cnt(x, i) + cnt(i, y) + a[x] * a[i] * a[y];
        if (now < min)
            min = now;
    }
    //return dp[x][y] = min;
    return min;
}
int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
        cin>>a[i];
    cout<<cnt(0, n - 1)<<endl;
    return 0;
}