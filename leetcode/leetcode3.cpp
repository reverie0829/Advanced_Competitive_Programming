#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

class Solution {
    public:
        int lengthOfLongestSubstring(string s) {
            int len=s.length();
            unordered_map<char,bool> sliding_window;
            int left=0,max_len=0;
            for(int right=0;right<len;right++){
                while(sliding_window[s[right]]==true){
                    sliding_window[s[left++]]=false;
                }
                sliding_window[s[right]]=true;
                if(right-left+1>max_len)
                    max_len=right-left+1;
            }
            return max_len;
        }
};
