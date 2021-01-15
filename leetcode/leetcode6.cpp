#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

class Solution {
    public:
        string convert(string s, int numRows) {
            if (numRows==1){
                return s;
            }
            string result="";
            int n = s.length();
            int cycleLen = 2*numRows-2;
            for(int i=0;i<numRows;++i){
                for(int j=0;j+i<n;j+=cycleLen){
                    result+=s[j+i];
                    if(i!=0 && i!=numRows-1&&j+cycleLen-i<n){
                        result+=s[j+cycleLen-i];
                    }
                }
            }
            return result;
        }
};

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    Solution s;
    ll t;
    cin >> t;
    while (t--)
    {
        string n="";
        int numRows=0;
        cin>>n>>numRows;
        cout << s.convert(n,numRows) << endl;
    }
}
