#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main(){
    
    std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

    set<string> st;
    stack<string> stk;
    string ss;
    int n, c;
    cin >> n;

    while(cin >> c){
        if(c == 1){
            string s;
            cin >> s;
            st.insert(s);
            stk.push(s);
        }
        else if(c == 2){
            if(st.size()){
                st.erase(stk.top());
                stk.pop();
            }
        }
        else{
            string s;
            cin >> s;
            bool found = st.count(s);
            cout << (found ? "Y" : "N");
        }
    }

    return 0;
}