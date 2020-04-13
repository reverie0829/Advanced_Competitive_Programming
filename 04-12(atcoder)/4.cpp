#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int N;
    long long count = 0;
    string S;
    cin >> N >> S;
    for (int i = 0; i < N; i++)
    {
        for (int j = i+1; j <N; j++)
        {
            for (int k = j+1; k <N; k++)
            {
                if (S[i] != S[j] && S[i] != S[k] && S[j] != S[k] && j - i != k - j)
                    count++;
            }
        }
    }
    cout << count << endl;
}
