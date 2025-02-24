#include <bits/stdc++.h>

#define sz(x) ((int)(x).size())

using namespace std;

using vii = vector<int>;

const int MOD = 1e9 + 7;

void solve() {
	string s; cin >> s; int n = sz(s);
	for (char c : s) if (c == 'm' || c == 'w') { cout << "0\n"; return; }
	vii dp(n + 1,0);
	dp[0] = dp[1] = 1;
	for (int i = 2;i <= n;++i) {
		if (s[i - 1] == s[i - 2] && (s[i - 1] == 'u' || s[i - 1] == 'n')) {
			dp[i] = (dp[i - 1] + dp[i - 2]) % MOD;
		} else dp[i] = (dp[i - 1] % MOD);
	}
	cout << dp[n] << '\n';
}

int main() {
	cin.tie(nullptr);
	ios::sync_with_stdio(0);
	int t; t = 1;
	while (t--) solve();
	return 0;
}
