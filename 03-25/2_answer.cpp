#include <iostream>
#include <deque>
#define F first
#define S second
#define MP make_pair
using namespace std;

deque<pair<int, int>> q;

//first is position
//second is element

int main() {
  ios::sync_with_stdio(0), cin.tie(0);
  int n, k, x;
  cin >> n >> k;
  for(int i = 0; i < k - 1; i++){
    cin >> x;
    while(!q.empty() && q.back().S < x)
      q.pop_back();
    q.push_back(MP(i, x));
  }
  for(int i = k - 1; i < n; i++){
    cin >> x;
    while(!q.empty() && q.back().S < x)
      q.pop_back();
    q.push_back(MP(i, x));
    while(!q.empty() && q.front().F <= i - k)
      q.pop_front();
    cout << q.front().S << " \n"[i == n - 1];
  }
}