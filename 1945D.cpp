#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;

using ll = long long;
using vll = vector<ll>;
using pll = pair<ll,ll>;

const ll inf = LLONG_MAX;

void solve() {
	int n, m; ll ans = inf; cin >> n >> m;
	vll a(n,0LL), b(n,0LL);
	for (ll& i : a) cin >> i;
	for (ll& i : b) cin >> i;
	vector<pll> dp(n + 1,{0,0});
	dp[n - 1].f = a[n - 1]; dp[n - 1].s = b[n - 1]; // caso base
	for (int i = n - 2;i >= 0;--i) {
		dp[i].f = a[i] + min(dp[i + 1].f,dp[i + 1].s);
		dp[i].s = b[i] + min(dp[i + 1].f,dp[i + 1].s);
	}
	//for (int i = 0;i < n;++i) cout << dp[i].f << ' '; cout << '\n';
	//for (int i = 0;i < n;++i) cout << dp[i].s << ' '; cout << '\n';
	for (int i = 0;i < m;++i) ans = min(ans,dp[i].f);
	cout << ans << '\n';
}

int main() {
	cin.tie(nullptr);
	ios::sync_with_stdio(0);
	int t; cin >> t;
	while (t--) solve();
	return 0;
}
