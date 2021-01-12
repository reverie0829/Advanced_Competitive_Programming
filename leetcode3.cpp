#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

class Solution {
public:
    int minOperations(int n) {
       int result=0;
       for(int i=0;i<n/2;++i){
           result+=n-(2*i+1);
       } 
       return result;
    }
};


int main(){
    std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
    Solution s;
    cout<<s.minOperations(6)<<endl;
}