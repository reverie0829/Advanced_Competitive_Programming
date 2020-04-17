#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

class Solution
{
public:
    int findTheDistanceValue(vector<int> &arr1, vector<int> &arr2, int d)
    {
        int ans = 0;
        for (int i = 0; i < arr1.size(); i++)
        {
            for (int j = 0; j < arr2.size(); j++)
            {
                if (arr2[j] >= arr1[i])
                {
                    if (arr2[j] - arr1[i] <= d)
                        break;
                }
                else
                {
                    if (arr1[i] - arr2[j] <= d)
                        break;
                }
                if (j == arr2.size() - 1)
                    ans++;
            }
        }
        return ans;
    }
};

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
}