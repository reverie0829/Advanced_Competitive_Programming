#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

class Solution
{
    public:
        void ans(string s,string t)
        {
            int slen=s.length();
            int tlen=t.length();
            int lcm = slen*tlen/gcd(slen,tlen);
            //cout<<lcm<<endl;
            string tmp="",tmp2="";
            for(int i=0;i<lcm/slen;++i){
                tmp+=s;
            }
            for(int i=0;i<lcm/tlen;++i){
                tmp2+=t;
            }
            if (tmp==tmp2) cout<<tmp<<endl;
            else cout<<"-1"<<endl;
        }
        int gcd(int x,int y)
        {
            if(x!=0&&y!=0)
                return gcd((x>=y)?x%y:x,(x<y)?y%x:y);
            else
                return(x!=0)?x:y;
        }
};

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    Solution S;
    ll t;
    cin >> t;
    while (t--)
    {
        string s="",t="";
        cin>>s>>t;
        //cout << s.ans(s,t) << endl;
        S.ans(s,t);
    }
}
