#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

class Solution {
    public:
        bool isValid(string s) {
            stack<char> tmp;
            unordered_map<char,char> match = {{'(',')'},{'[',']'},{'{','}'}};
            for(auto i : s){
                if(i=='(' or i=='[' or i=='{'){
                    tmp.push(i);
                }
                else {
                    if(tmp.empty()) return false;
                    char top = tmp.top();
                    tmp.pop();
                    if(match[top]!=i) return false;
                }
            }
            return tmp.size()==0;
        }
};

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    string str = "()[]{}";
    cout << Solution().isValid(str) << endl;
    return 0;
}
