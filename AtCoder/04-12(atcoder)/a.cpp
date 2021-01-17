#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n,a=0,b=0;
    cin >> n;
    a = n / 10;
    b = a / 10;
    if (n%10==7) {
        cout << "Yes" << endl;
    }
    else if(a%10==7){
        cout << "Yes" << endl;
    }
    else if(b%10==7){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
