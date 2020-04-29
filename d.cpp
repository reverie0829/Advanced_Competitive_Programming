#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    stringstream input;
    string S, temp;
    ll s;
    int cnt=0;
    cin >> S;
    for (int i = 0; i < S.size() - 3; i++)
    {
        for (int j = 4; j <= S.size()-i; j++)
        {   
            input.clear();
            temp = S.substr(i, j);
            input<<temp;
            input >> s;
            input.str("");
            if(s%2019==0) cnt++;
        }
    }
    cout<<cnt<<endl;
}