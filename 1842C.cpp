#include <bits/stdc++.h>
using namespace std;

using vii = vector<int>;

const int inf = INT_MAX;

void solve() {
	int n; cin >> n;
	vii a(n + 1,0), last(n + 1,inf), dp(n + 1,0);
	for (int i = 1;i <= n;++i) cin >> a[i];
	for (int i = 1;i <= n;++i) {
		dp[i] = min(dp[i - 1] + 1,last[a[i]]);
		last[a[i]] = min(last[a[i]],dp[i - 1]);
	}
	cout << n - dp[n] << '\n';
}

int main() {
	cin.tie(nullptr);
	ios::sync_with_stdio(0);
	int t; cin >> t;
	while (t--) solve();
	return 0;
}
