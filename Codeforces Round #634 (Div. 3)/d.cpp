#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int T;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    string s;
    cin >> T;
    cin.ignore();
    while (T--)
    {
        for (int i = 0; i < 9; i++)
        {
            getline(cin, s);
            for(int j=0;j<81;j++){
                if(s[j] == '1') s[j] = '2';
            }            
            cout << s << endl;
        }
    }
}