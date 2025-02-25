#include <bits/stdc++.h>

#define sz(x) (int)((x).size())

using namespace std;

using ll = long long;
using vll = vector<ll>;

void solve() {
	string s, k = ""; cin >> s; int n = sz(s);
	if (n < 5) { cout << "0\n"; return; }
	if (s[0] != 'v' || s[1] != 'v') k += s[0];
	for (int i = 1;i < n;++i) {
		if (s[i] == s[i - 1] && s[i] == 'v') k += 'w';
		else if (s[i] == 'v' && s[i + 1] == 'v') continue;
		else k += s[i];
	}
	//cout << k << '\n';
	int m = sz(k);
	vll pref(m,0), suf(m,0), dp(m + 1,0);
	pref[0] = (k[0] == 'w' ? 1 : 0);
	suf[m - 1] = (k[m - 1] == 'w' ? 1 : 0);
	for (int i = 1;i < m;++i) {
		pref[i] = pref[i - 1];
		if (k[i] == 'w') ++pref[i];
	}
	for (int i = m - 2;i >= 0;--i) {
		suf[i] = suf[i + 1];
		if (k[i] == 'w') ++suf[i];
	}
	for (int i = 1;i <= m;++i) {
		dp[i] = dp[i - 1];
		if (k[i - 1] == 'o') {
			dp[i] += (pref[i - 1]*suf[i - 1]);
		}
	}
	cout << dp[m] << '\n';
}

int main() {
	cin.tie(nullptr);
	ios::sync_with_stdio(0);
	int t; t = 1;
	while (t--) solve();
	return 0;
}
