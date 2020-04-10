#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int num, k;
    string input;
    cin >> num;
    while (num--)
    {
        cin >> input;
        //sort(input.begin(), input.end());
        map<char, int> mp;
        k = true;
        for (int i = 1; input[i]; i++)
        {
            mp[input[i]]++;
            if (mp[input[i]] >= 2 || input[i] - input[i - 1] != 1)
            {
                k = false;
                cout << "No";
                break;
            }
        }
        if (k)
            cout << "Yes";
        cout << "\n";
        mp.clear();
        input.clear();
    }
    return 0;
}
