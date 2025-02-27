#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, m; cin >> n;
	vector<int> r(n,0), pr(n + 1,0);
	for (int& i : r) cin >> i;
	cin >> m;
	vector<int> b(m,0), pb(m + 1,0);
	for (int& i : b) cin >> i;
	vector<vector<int>> dp(n + 1,vector<int>(m + 1,0));
	for (int i = 1;i <= n;++i) pr[i] = pr[i - 1] + r[i - 1];
	//cout << '\n';
	for (int i = 1;i <= m;++i) pb[i] = pb[i - 1] + b[i - 1];
	//cout << '\n';
	for (int i = 1;i <= n;++i) dp[i][0] = max(dp[i - 1][0], pr[i]);
	for (int i = 1;i <= m;++i) dp[0][i] = max(dp[0][i - 1], pb[i]);
	
	//for (int i = 1;i <= m;++i) cout << dp[0][i] << ' '; cout << '\n';
	//for (int i = 1;i <= n;++i) cout << dp[i][0] << ' '; cout << '\n';
	for (int i = 1;i <= n;++i) {
		for (int j = 1;j <= m;++j) {
			dp[i][j] = max({dp[i][j - 1],dp[i - 1][j],pr[i] + pb[j]});
		}
	}
	cout << dp[n][m] << '\n';
}

int main() {
	cin.tie(nullptr);
	ios::sync_with_stdio(0);
	int t; cin >> t;
	while (t--) solve();
	return 0;
}
