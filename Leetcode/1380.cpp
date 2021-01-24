#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

class Solution
{
public:
    vector<int> luckyNumbers(vector<vector<int>> &matrix)
    {
        int w = matrix[0].size();
        int h = matrix.size();
        vector<int> rows(h, 0);
        vector<int> cols(w, 0);
        for (int i = 0; i < h; i++)
            rows[i] = *std::min_element(matrix[i].begin(), matrix[i].end());
        for (int i = 0; i < w; i++)
        {
            vector<int> current_cln(h, 0);
            for (int j = 0; j < h; j++)
                current_cln[j] = matrix[j][i];
            cols[i] = *std::max_element(current_cln.begin(), current_cln.end());
        }

        vector<int> out;
        for (int i = 0; i < w; i++)
        {
            for (int j = 0; j < h; j++)
            {
                if (matrix[j][i] == rows[j] && matrix[j][i] == cols[i])
                    out.push_back(matrix[j][i]);
            }
        }
        return out;
    }
};
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
}