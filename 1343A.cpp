#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll p2[32];

void precompute() {
	ll sum = 0;
	for (int i = 0;i <= 31;++i) {
		sum += (1 << i);
		p2[i] = sum;
		cerr << p2[i] << '\n';
	}
}

void solve() {
	ll n; cin >> n;
	for (int i = 1;i <= 31;++i) {
		if (n % p2[i] == 0) {
			cout << n / p2[i] << '\n'; return;
		}
	}
}

int main() {
	cin.tie(nullptr);
	ios::sync_with_stdio(0);
	precompute();
	int t; cin >> t;
	while (t--) solve();
	return 0;
}
