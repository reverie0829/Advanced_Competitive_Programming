#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

class Solution {
    public:
        int numWaterBottles(int numBottles, int numExchange) {
            int result=0;
            int drink=numBottles; 
            int empty=numBottles;
            while(drink){
                result+=drink;
                drink=numBottles/numExchange;
                empty=numBottles%numExchange;
                numBottles=drink+empty;
            }
            return result;
        }
};


int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    Solution test;
    cout<<test.numWaterBottles(15,4)<<endl;
}
