#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

class Solution
{
public:
    int reverse(int x)
    {
        long res = 0;
        while (x)
        {
            res = res * 10 + x % 10;
            x /= 10;
        }
        return (res > INT_MAX || res < INT_MIN)  ? 0 : res;
    }
};

int main()
{   
    Solution s;
    int x = 0; 
	while (1)
	{
		cin >> x;
		cout << s.reverse(x) << endl;
	}
}