#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    ll t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ll i=0,o=0,t=0,c=n;
        while (n--){
            ll j=0;
            cin>>j;
            if(j==1){
                o+=1;
            }
            else if(j==2){
                t+=1;
            }
            i+=j;           
        }
        if(t%2==0 && o%2==0){
            cout<<"YES"<<endl;
        }
        else if(t%2!=0 && o%2==0 && o!=0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}