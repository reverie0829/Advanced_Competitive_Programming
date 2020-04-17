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

class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        vector<int> list;
        vector<int> ans;
        for(int i=0;i<m;i++){
            list.push_back(i+1);
        }
        for(int i=0;i<queries.size();i++){
            for(int j=0;j<m;j++){
                if(queries[i]==list[j]){
                    ans.push_back(j);
                    list.erase(list.begin()+j);
                    list.insert(list.begin(),queries[i]);
                }
            }
        }return ans;
    }
};