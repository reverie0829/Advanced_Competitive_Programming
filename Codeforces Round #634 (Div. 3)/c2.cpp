#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    long long t;
    cin >> t;
    while(t--)
    {
        unordered_map<int, int> mp;
        int n;
        cin >> n;
        int same = 0;
        while(n--)
        {
            int a;
            cin >> a;
            mp[a]++;
            if(same<mp[a])
                same = mp[a];
        }
        int dis; 
        dis = mp.size();
        if((same-1)>=dis)
        cout << min(dis, same-1)<<endl;
        else
        cout<<min(dis-1,same)<<endl;
    }  
}