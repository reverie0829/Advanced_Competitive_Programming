#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

class Solution
{
public:
    void ans(int num,int d){
        int arr[num];
        for(int i=0;i<num;++i){
            cin>>arr[i];
            //cout<<arr[i]<<endl;
        }
        sort(arr,arr+num);
        bool ok = true;
        for(int i=0;i<num;++i){
            if (arr[i]>d){
                ok=false;
                break;
            }
            else ok=true;
        }
        if(ok==true) cout<<"YES"<<endl;
        else{
            if(arr[0]+arr[1]<=d) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
};

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    Solution s;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n,d;
        cin>>n>>d;
        //cout << s.ans(n) << endl;
        s.ans(n,d);
    }
}
