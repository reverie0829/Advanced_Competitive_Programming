#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        int n = queries.size();
        vector<int> reff(m+1);
        for(int i=0; i<m; i++) {
            reff[i+1] = i;
        }
        vector<int> res(n);
        for(int i=0; i<n; i++) {
            res[i] = reff[queries[i]];
            for(int j=1; j<=m; j++){
                if(reff[j] < res[i])
                    reff[j] += 1;
            }    
            reff[queries[i]] = 0;
        }
        return res;
    }
};

int main()
{
    int n;
    Solution s;
    while (cin >> n)
    {
        cout << s. << endl;
    }
}

