#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, max = 0;
    vector<int> houses;

    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        houses.push_back(temp);
    }

    int last_col = -1, temp_max = 0;
    for (int i = 0; i < n; i++)
    {
        if (houses.at(i) != last_col)
        {
            temp_max++;
            last_col = houses.at(i);
        }
        else
        {
            if (temp_max > max)
                max = temp_max;

            temp_max = 0;
            last_col = -1;
            i--;
        }
        //cout << max << " " << temp_max << '\n';
    }
    if (temp_max > max)
        max = temp_max;

    cout << max;
    return 0;
}