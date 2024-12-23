#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a, b, memo;

int dp(int i) {
	if (i == n) return 0;
	if (memo[i] != -1) return memo[i];
	int take = a[i] + dp(i + 1) - (i + 1 < n ? b[i + 1] : 0);
	int leave = dp(i + 1);
	return memo[i] = max(take,leave);
}

void solve() {
	cin >> n;
	memo.assign(n + 1,-1); a.assign(n,0), b.assign(n,0);
	for (int& i : a) cin >> i;
	for (int& i : b) cin >> i;
	cout << dp(0) << '\n';
}

int main() {
	cin.tie(nullptr);
	ios::sync_with_stdio(0);
	int t; cin >> t;
	while (t--) solve();
	return 0;
}
