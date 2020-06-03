#include <bits/stdc++.h>
 
using namespace std;
 
#define MOD 1000000007
#define INV 500000004
 
long long l, r;
 
long long cal(long long a) {
	long long re = 0;
	int la[] = {1, 2};
	bool at = 0;
	for (long long i = 1; ; i <<= 1, at ^= 1) {
		long long cnt = min(i, a);
		a -= cnt;
		cnt %= MOD;
		long long fi = la[at];
		la[at] = (la[at] + cnt * 2) % MOD;
		long long se = (la[at] + MOD - 2) % MOD;
		re = (re + (fi + se) * cnt % MOD * INV) % MOD;
		if (!a)
			break;
	}
	return re;
}
 
int main() {
	scanf("%lld%lld", &l, &r);
	printf("%lld\n", (MOD + cal(r) - cal(l - 1)) % MOD);
}