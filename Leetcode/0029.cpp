#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long
static int x = [](){std::ios::sync_with_stdio(false);cin.tie(NULL);return 0;}();

class Solution {
    public:
        int divide(int dividend, int divisor) {
            if (dividend == INT_MIN && divisor ==-1) return INT_MAX;
            long dvd = labs(dividend) , dvs = labs(divisor) , ans=0;
            int sign = dividend>0 ^ divisor>0 ?-1 : 1;
            while(dvd >= dvs){
                long tmp = dvs, m = 1;
                while(tmp<<1 <= dvd){
                    tmp<<=1;
                    m<<=1;
                }
                dvd -=tmp;
                ans+=m;
            }
            return sign * ans;
        }
};

int main(){
    cout<<Solution().divide(15,3)<<endl;
    return 0;
}
