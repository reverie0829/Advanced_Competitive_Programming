#include <bits/stdc++.h>
using namespace std;

long long aa[1001];
long long combine(int a, int b) {
	return (aa[a] / aa[a - b] / aa[b]) % (1000000000 + 9);
}

int main()
{
	int n, k;
	cin >> n >> k;
	aa[0] = 1;

	for (int i = 1; i < n; i++) {
		aa[i] = aa[i - 1] * i;
		cout << aa[i] << " ";
	}

	int count2, count1;
	count2 = n / 2;
	count1 = n % 2;

	long long total = 0;
	while (count2 + count1 <= k) {
		cout << count2 << " " << count1 << endl;
		total += combine(count2 + count1, count2);
		count2--;
		count1 += 2;
	}

	cout << total % (1000000000 + 9);
	return 0;
}

