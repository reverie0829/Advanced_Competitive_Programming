#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    int num;
    string s;
 
    cin >> num;
    while(num--) {
        for(int n = 0;n < 9;++n) {
            cin >> s;
            for(int i = 0; i < 9;++i) {
                if(s[i] == '1') s[i] = '2';
            }
            cout << s << endl;
        }
    }
}