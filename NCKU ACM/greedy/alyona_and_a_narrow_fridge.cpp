#include <bits/stdc++.h>
typedef long long ll;
const int M = int(1e5) + 5;
using namespace std;

int main()
{
  int n, h;
  cin >> n >> h;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int k = n; k >= 0; k--)
  {
    vector<int> b(a.begin(), a.begin() + k);
    sort(b.begin(), b.end());
    ll sum = 0;
    for (int i = int(b.size()) - 1; i >= 0; i -= 2)
      sum += b[i];
    if (sum <= h)
    {
      cout << k << endl;
      break;
    }
  }
  return 0;
}