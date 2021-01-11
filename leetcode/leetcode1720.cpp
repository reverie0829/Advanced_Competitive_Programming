#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        int len=encoded.size();
        int output[len+1];
        memset(output,0,sizeof(output));
        output[0]=first;
        for(int i=0;i<len;i++){
            output[i+1]=output[i]^encoded[i];
        }
        vector<int> result;
        for(int i=0;i<len+1;i++){
            result.push_back(output[i]);
        }
    return result;
    }
};

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    Solution s;
    int encoded[] = {1,2,3};
    int first = 1;
    cout << s.decode()<< endl;
}