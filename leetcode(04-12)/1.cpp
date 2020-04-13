#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        int n = words.size();
        vector<string> ans;
        for(int i=0; i<n; i++) {
            for(int j =0; j<n; j++)
            {
                if(j==i)
                    continue;
                if(words[j].find(words[i]) != string::npos)//有找到
                {
                    ans.push_back(words[i]);
                    break;
                }
            }
        }
        return ans;
    }
};
/*
string 類提供了 6 種查找函數,每種函數以不同形式的 find 命名。
這些操作全來都返回 string::size_type 類型的值，以下標形式標記查找匹配所發生的位置；
或者返回一個名為 string::npos 的特殊值，說明查找沒有匹配。 string 類將 npos 定義為源保證大於任何有效下標的值。
所以 當 str.find("哦")==string::npos時則說明字符串str中不存在“哦”這個字字符，
反之，str.find("哦")!=string::npos則說明字符串str中存在“哦”這個字符
*/
int main()
{
    int n;
    Solution s;
    while (cin >> n)
    {
        cout << s. << endl;
    }
}

