#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

class Solution
{
public:
    string sortString(string s)
    {
        int cnt[26];
        memset(cnt, 0, sizeof(cnt));
        string ans = "";
        for (int i = 0; i < s.size(); i++)
        {
            cnt[s[i] - 'a']++;
        }
        while (ans.size()<s.size())
        {
            for (int i = 0; i < 26; i++)
            {
                if (cnt[i] > 0)
                {
                    ans += 'a' + i;
                    cnt[i]--;
                }
            }
            for (int i = 25; i >= 0; i--)
            {
                if (cnt[i] != 0)
                {
                    ans += 'a' + i;
                    cnt[i]--;
                }
            }
        }

        return ans;
    }
};

class Solution {
public:
  string sortString(string s) {
        unordered_map<char, int> mp;
        for(int i=97;i<=122;i++){
            mp[i] = 0;
        }
        for(int i=0;i<s.length();i++){
            mp[s[i]]+=1;
        }
        string ans;
        while(ans.length() != s.length()){
            for(int i=97;i<=122;i++){
                if(mp[i]>0){
                    ans.push_back(i);
                    mp[i]-=1;
                }
            }
            for(int i=122;i>=97;i--){
                if(mp[i]>0){
                    ans.push_back(i);
                    mp[i]-=1;
                }
            }
        }
        return ans;
    }
};

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
}