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

    string s1, s2;
    cin >> s1 >> s2;

    int count1 = 0;
    bool a_appear = false;
    char compare = 'A';

    vector<int> countsb1;
    vector<int> countsa1;
    int asum1 = 0;

    for (int i = 0; i < n; i++)
    {
        if (a_appear == false && s1[i] != 'A')
            continue;

        if (s1[i] == 'A')
        {
            a_appear = true;
            if (compare == 'K')
            {
                countsb1.push_back(count1);

                count1 = 1;
                compare = 'A';
            }
            else
            {
                count1++;
            }
        }
        if (s1[i] == 'K')
        {
            if (compare == 'A')
            {
                asum1 += count1;
                countsa1.push_back(asum1);
                count1 = 1;
                compare = 'K';
            }
            else
            {
                count1++;
            }
        }
    }
    if (compare == 'A')
    {
        asum1 += count1;
        countsa1.push_back(asum1);
    }

    int count2 = 0;
    bool a_appear2 = false;
    char compare2 = 'A';

    vector<int> countsb2;
    vector<int> countsa2;
    int asum2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (a_appear2 == false && s2[i] != 'A')
            continue;

        if (s2[i] == 'A')
        {
            a_appear2 = true;
            if (compare2 == 'K')
            {
                countsb2.push_back(count2);
                count2 = 1;
                compare2 = 'A';
            }
            else
            {
                count2++;
            }
        }
        if (s2[i] == 'K')
        {
            if (compare2 == 'A')
            {
                asum2 += count2;
                countsa2.push_back(asum2);
                count2 = 1;
                compare2 = 'K';
            }
            else
            {
                count2++;
            }
        }
    }

    if (compare2 == 'A')
    {
        asum2 += count2;
        countsa2.push_back(asum2);
    }

    ll ans1 = 0, ans2 = 0;
    int total_a1 = countsa1.back();
    int total_a2 = countsa2.back();

    for (int i = 0; i < countsb1.size(); i++)
    {
        ll left_as = countsa1[i];
        ll ks = countsb1[i];
        ll right_as = total_a1 - left_as;

        ans1 += (left_as * ks * right_as);
    }

    for (int i = 0; i < countsb2.size(); i++)
    {
        ll left_as = countsa2[i];
        ll ks = countsb2[i];
        ll right_as = total_a2 - left_as;

        ans2 += (left_as * ks * right_as);
    }

    //cout << ans1 << " " << ans2 << endl;
    if (ans1 > ans2)
        cout << "LanA WIN";
    else if (ans1 < ans2)
        cout << "LanE WIN";
    else
    {
        cout << "WINWIN";
    }

    return 0;
}