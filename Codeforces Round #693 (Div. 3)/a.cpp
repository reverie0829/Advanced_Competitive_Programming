#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    ll t, n,a,b,c;
    cin >> t;
    while (t--)
    {
        cin >> a>>b>>c;
        ll d=1,e=1;
        while(a%2==0){
            a/=2;
            d*=2;
        }
        while(b%2==0){
            b/=2;
            e*=2;
        }
        if(d*e<c){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}