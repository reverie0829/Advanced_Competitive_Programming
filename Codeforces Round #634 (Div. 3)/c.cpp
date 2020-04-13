#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long
int T;
int skill, output[2000010];
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    cin >> T;
    while (T--)
    {
        memset(output, 0, 200001 * 4);
        int n;
        cin >> n;
        int tempp;
        long long maxx, cnntt;
        maxx = 0;
        cnntt = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> tempp;
            if (!output[tempp])
            {
                ++cnntt;
            }
            output[tempp]++;
            if (output[tempp] > maxx)
                maxx = output[tempp];
        }
        while (maxx)
        {
            if (maxx <= cnntt - 1)
                break;
            if (--maxx <= cnntt)
                break;
        }
        cout << maxx << endl;
    }
    return 0;
}