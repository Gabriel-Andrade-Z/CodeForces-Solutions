#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
	int n; cin >> n;
	vector<ll> dp(n + 1,0LL); dp[1] = 4;
	ll curr = 4, ans = 4;
	for (int i = 3;i <= n;++i) {
		if (i % 2) ans = 2LL * ans + 4;
		curr = ans;
	}
	cout << ans << '\n';
}

int main() {
	cin.tie(nullptr);
	ios::sync_with_stdio(0);
	int t; t = 1;
	while (t--) solve();
	return 0;
}
