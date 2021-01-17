#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main(){
    
    std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

    vector<int> dta;
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        dta.push_back(temp);
    }

    int cur_max;
    for (int i = 0; i < n - k + 1; i++){
        if(i == 0){
            cur_max = *max_element(next(dta.begin(), i), next(dta.begin(), i + k));
            cout << cur_max << " ";
        }
        else{
            int nxt = *next(dta.begin(), i + k - 1);
            if(nxt > cur_max){
                cur_max = nxt;
                cout << cur_max << " ";
            }
            else{
                if(*next(dta.begin(), i - 1) == cur_max){
                    cur_max = *max_element(next(dta.begin(), i), next(dta.begin(), i + k));
                    cout << cur_max << " ";
                }
                else
                    cout << cur_max << " ";
            }
        }
    }

    return 0;
}