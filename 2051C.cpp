#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, m, k; cin >> n >> m >> k;
	vector<int> a(m,0), q(k,0), mark(n + 1,1);
	string ans = "";
	for (int i = 0;i < m;++i) ans += "0";
	for (int i = 0;i < m;++i) { cin >> a[i]; }
	for (int i = 0;i < k;++i) {
		cin >> q[i]; mark[q[i]] = 0;
	}
	if (k == n) {
		for (int i = 0;i < m;++i) ans[i] = '1';
	} else if (k == n - 1) {
		for (int i = 0;i < m;++i) {
			if (mark[a[i]] != 0) ans[i] = '1';
		}
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
