#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

class Solution 
{
    public:
        vector<string> letterCombinations(string digits) 
        {
            vector<string> result;
            if (digits.empty()) return result;
            findCombination(digits, 0, string(""), result);
            return result;
        }
    private:
        const vector<string> letterMap = {            
            " ","","abc",
            "def","ghi","jkl",
            "mno","pqrs","tuv","wxyz"};

        void findCombination(const string& digits, int index, const string& s, vector<string>& res)
        {
            if (digits.length() == index) 
            {
                res.push_back(s);
                //cout<<s<<"--->debug"<<endl;
                return;
            }
            char ch = digits[index];
            string letters = letterMap[ch - '0'];
            for (auto& letter : letters)
            {
                findCombination(digits, index + 1, s + letter, res);
            }
        }
};

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    Solution s;
    string n = "23";
    for(auto i :s.letterCombinations(n)){
        for(auto j :i){
            cout<<j;
        }
        cout<<endl;
    }
}
