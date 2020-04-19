#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

int main(){
    std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
    int n,m,a,cnt=0,ans=0;
    cin>>n>>m;
    while(m--){
        cin>>a;
        cnt+=a;
    }
    if(cnt>n) cout<<"-1"<<endl;
    else{
        cout<<n-cnt<<endl;
    }
}