#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

class Solution {
    public:
        string intToRoman(int num) {
            vector<int> value = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
            vector<string> symbol = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
            //string symbol="IVXLCDM";
            string result = "";
            for(int i=value.size()-1;i>=0;--i){
                while(num>=value.at(i)){
                    num-=value.at(i);
                    result+=symbol.at(i);
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
    int n;
    cin>>n;
    cout << s.intToRoman(n) << endl;
}
