#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, ans = 0; cin >> n;
	string e, g; cin >> e >> g;
	vector<bool> mark(n,0);
	for (int i = 0;i < n;++i) {
		if (g[i] == '0') continue;
		if (i > 0 && e[i - 1] == '1' && !mark[i - 1]) { mark[i - 1] = true; ++ans; }
		else if (e[i] == '0') { ++ans; }
		else if (i < n - 1 && e[i + 1] == '1' && !mark[i + 1]) { mark[i + 1] = true; ++ans; }
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
