#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
	int n, a, b; cin >> n >> a >> b;
	if (a == 1) {
		if ((n - 1) % b == 0) cout << "Yes\n";
		else cout << "No\n";
		return;
	}
	ll p = 1;
	while (p <= n) {
		if ((n - p) % b == 0) {	cout << "Yes\n"; return; }
		p *= a;
	}
	cout << "No\n";
}

int main() {
	cin.tie(nullptr);
	ios::sync_with_stdio(0);
	int t; cin >> t;
	while (t--) solve();
	return 0;
}
