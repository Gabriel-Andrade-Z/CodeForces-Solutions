#include <bits/stdc++.h>
using namespace std;

void solve() {
	int l, r, ans = 0; cin >> l >> r;
	while (l || r) {
		ans += (r - l); l /= 10; r /= 10;
	}
	cout << ans << '\n';
}

int main() {
	cin.tie(nullptr);
	ios::sync_with_stdio(0);
	int t; cin >> t;
	while (t--) solve();
	return 0;
}
