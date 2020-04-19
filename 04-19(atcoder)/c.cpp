#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

int main(){
    std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
    ll n,a[200001],k,t=0;
    memset(a,0,sizeof(a));
    cin>>n;
    t=n-1;
    while(t--){
        cin>>k;
        a[k]++;
    }
    for(ll i=1;i<=n;i++){
        cout<<a[i]<<endl;
    }

}