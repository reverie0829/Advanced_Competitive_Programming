#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    freopen("input2.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int T, output = 1;
    vector<long long> v;
    cin >> T;
    while (T--)
    {   
        v.clear();
        long long num, count = 0;
        cin >> num;
        for (int i = 0; i < num; i++)
        {
            int input;
            cin >> input;
            v.push_back(input);
        }
        for (int i = 2; i < num; i++)
        {
            for (int j = 1; j < i; j++)
            {
                for (int k = 0; k < j; k++)
                {
                    if (v[i] == v[j] * v[k] || v[j] == v[i] * v[k] || v[k] == v[j] * v[i])
                    {
                        count++;
                    }
                }
            }
        }
        cout << "Case #" << output++ << ": " << count << endl;       
    }
    return 0;
}