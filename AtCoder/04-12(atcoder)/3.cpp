#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int f( int a, int b )
{
    if( b==0 )
        return a;
    return f( b, a%b );
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int k;
    int res=0;
    cin >> k;
    for (int i=1; i <= k;++i){
        for (int j = 1; j <= k;++j){
            for (int t = 1; t <= k;++t){
                res += f(f(i, j), t);
            }
        }
    }
    cout << res << endl;
}
