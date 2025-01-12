#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
	int n, ans = 0; cin >> n;
	vector<int> a(n,0);
	for (int& i : a) cin >> i;
	vector<vector<ll>> dp(n + 1,vector<ll>(n + 1,-1));
	dp[0][0] = 0;
	for (int i = 1;i <= n;++i) {
		for (int j = 0;j <= i;++j) {
			dp[i][j] = dp[i - 1][j];
			if (j > 0 && dp[i - 1][j - 1] != -1 && dp[i - 1][j - 1] + a[i - 1] >= 0) {
				dp[i][j] = max(dp[i][j],dp[i - 1][j - 1] + a[i - 1]);
			}
		}
	}
	for (int i = 0;i <= n;++i) {
		if (dp[n][i] >= 0) ans = max(ans,i);
	}
	cout << ans << '\n';
}

int main() {
	cin.tie(nullptr);
	ios::sync_with_stdio(0);
	solve();
	return 0;
}
