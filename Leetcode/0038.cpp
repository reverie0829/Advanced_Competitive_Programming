#include <bits/stdtr1c++.h>
using namespace std;

class Solution
{
public:
    string countAndSay(int n)
    {
        if (n == 1)
        {
            return "1";
        }
        string before = countAndSay(n - 1);
        int count = 1;
        string output = "";
        for (int i = 0; i < before.length(); i++)
        {
            if (before[i] == before[i + 1])
            {
                count++;
            }
            else if (before[i] != before[i + 1])
            {
                output.append(to_string(count) + before[i]);
                count = 1;
            }
        }
        return output;
    }
};

int main()
{
    int n;
    Solution s;
    while (cin >> n)
    {
        cout << s.countAndSay(n) << endl;
    }
}