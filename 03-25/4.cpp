#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main(){
    
    std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

    vector<long long> dist;

    long long  n, m, k, prev, total = 0;
    cin >> n >> m >> k;
    cin >> prev;
    for (long long i = 1; i < n; i++){
        long long cur;
        cin >> cur;
        total += cur - prev;
        dist.push_back(cur - prev);
        prev = cur;
    }
    //cout << total;

    sort(dist.begin(), dist.end());

    for (int i = 0; i < k-1; i++){
        //cout << dist.back();
        total -= dist.back();
        dist.pop_back();
    }

    cout << total + k;
    return 0;
}