#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> memo;

ll dp(ll i) {
	if (i < 0) return 1;
	if (memo[i] != -1) return memo[i];
	return memo[i] = dp(i - 1) + dp(i - 1);
}

void solve() {
	ll n; cin >> n;
	memo.assign(n + 1,-1);
	cout << dp(n) - 2 << '\n';
}

int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	solve();
	return 0;
}
