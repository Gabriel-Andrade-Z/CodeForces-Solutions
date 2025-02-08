#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

void solve() {
	int n, k, d; cin >> n >> k >> d;
	vector<int> dp(n + 1,0), dp_res(n + 1,0); dp[0] = dp_res[0] = 1;
	for (int i = 1;i <= n;++i) {
		for (int j = 1;j <= k;++j) {
			if (i - j >= 0) dp[i] = (dp[i] + dp[i - j]) % MOD;
		}
		for (int j = 1;j <= d - 1;++j) {
			if (i - j >= 0) dp_res[i] = (dp_res[i] + dp_res[i - j]) % MOD;
		}
	}
	cout << (dp[n] - dp_res[n] + MOD) % MOD << '\n';
}

int main() {
	cin.tie(nullptr);
	ios::sync_with_stdio(0);
	solve();
	return 0;
}
