#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long
static int x = [](){std::ios::sync_with_stdio(false);cin.tie(NULL);return 0;}();

class Solution {
    public:
        int strStr(string haystack, string needle) {
            int left = haystack.size();
            int right = needle.size();
            if(left<right) return -1;
            if(left==right) return haystack==needle ?0:-1;
            for(int i=0;i<=left-right;++i){
                if(haystack.substr(i,right)==needle) return i;
            }
            return -1;
        }
};


int main(){
    return 0;
}
