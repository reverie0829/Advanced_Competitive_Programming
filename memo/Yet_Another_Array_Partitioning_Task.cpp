#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m, k ;
    long long sum = 0;
    vector<long long> dta;
    vector<int> max_indexes;

    cin >> n >> m >> k;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        dta.push_back(temp);
    }

    for (int i = 0; i < m * k; i++)
    {
        vector<long long>::iterator it = max_element(dta.begin(), dta.end());
        int ind = it - dta.begin();

        sum += *it;
        *it = -1000000001;
        max_indexes.push_back(ind);
    }


    sort(max_indexes.begin(), max_indexes.end());


    cout << sum << '\n';

    int count = 0;
    for (int i = m-1; i < m*k; i+=m)
    {
        cout << max_indexes.at(i) + 1 << " ";
        count++;
        if(count == k - 1)
            break;
    }
    return 0;
}