#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string input;
    cin >> input;
    char cap;
    cap = input[0];
    if(cap < 41 || cap > 90)
        cap -= 32;

    input[0] = cap;
    cout << input;
    return 0;
}