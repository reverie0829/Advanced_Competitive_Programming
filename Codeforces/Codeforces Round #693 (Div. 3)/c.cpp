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
        ll a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ll sum_a[n],max=0;
        for (int i=0;i<n;i++){
            sum_a[i]=0;
        }
        for(int i=n-1;i>=0;i--){
            if (i+a[i]<n) sum_a[i]=a[i]+sum_a[a[i]+i];
            else sum_a[i]=a[i];
            if (sum_a[i]>max) max=sum_a[i];
        }
        cout<<max<<endl;
    }
}