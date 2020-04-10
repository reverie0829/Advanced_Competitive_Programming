#include<bits/stdc++.h>
#include<bits/extc++.h>
using namespace std;
using namespace __gnu_cxx;
using namespace __gnu_pbds;
using ll = long long;
#define AC ios::sync_with_stdio(0),cin.tie(0);
#define lowbit(x) x&-x

ll n;

struct BIT
{
    vector<ll> v;
    void modify(ll x,ll val)
    {
        for(;x<v.size();x+=lowbit(x))
            v[x]+=val;
    }
    ll query(ll x)
    {
        ll t=0;
        for(;x;x-=lowbit(x))
            t+=v[x];
        return t;
    }
};

int main()
{
    AC
    ll num=1;
    while(cin>>n&&n)
    {
        cout<<"Case #"<<num++<<": ";
        ll cnt=0,r=0,rnk=1;
        BIT sum;
        vector<ll> v(n);
        set<ll> s;
        map<ll,ll> m;
        for(ll i=0;i<n;i++)
            cin>>v[i],s.insert(v[i]);
        for(auto e:s)
            m[e]=rnk++;
        for(auto &e:v)
            e=m[e];
        sum.v.resize(s.size()+1,0);
        for(ll i=0;i<n;i++)
        {
            r+=cnt++-sum.query(v[i]);
            sum.modify(v[i],1);
        }
        cout<<r<<'\n';
    }
}