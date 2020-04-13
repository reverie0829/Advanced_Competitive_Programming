#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long
int T;
int main(){
    std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
    cin>>T;
    while(T--){
        ll n;
        cin>>n;
        cout<<n/2-(n%2==0)<<endl;
    }
    return 0;
}