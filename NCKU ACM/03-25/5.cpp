#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main(){
    
    std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<int> mtd;
    vector<vector<int>> stp;

    vector<int> init0;
    vector<int> init1;
    init0.push_back(0);
    init1.push_back(1);


    mtd.push_back(0);
    stp.push_back(init0);

    mtd.push_back(1);
    stp.push_back(init1);

    vector<int> temp1 = init0, temp2 = init1;
    for (int i = 2; i <= n; i++){
        int count = 0;
        vector<int> new_stp;
        for (auto i = temp1.begin(); i != temp1.end(); i++){
            if(*i + 1 <= k){
                new_stp.push_back(*i + 1);
                count++;
            }
        }
        for (auto i = temp2.begin(); i != temp2.end(); i++){
            if(*i + 1 <= k){
                new_stp.push_back(*i + 1);
                count++;
            }
        }
        temp1 = temp2;
        temp2 = new_stp;
        stp.push_back(new_stp);
        mtd.push_back(count);
    }

    cout << mtd.back() % (1000000000 + 9) << endl;
    vector<int> kk = stp.back();
    //for (int i = 0; i < kk.size();i++){
    //    cout << kk.at(i);
    //}
        return 0;
}