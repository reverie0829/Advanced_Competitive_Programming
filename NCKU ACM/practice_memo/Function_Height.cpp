#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
    long long n, k, result;
    cin >> n >> k;
    result = (k/n)+(k%n!=0);
    cout << result << endl;
}