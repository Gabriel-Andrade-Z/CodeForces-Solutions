#include <bits/stdc++.h>

#define f first
#define s second
#define pb push_back
#define sz(x) (x).size()
#define all(x) (x).begin(),(x).end()

using namespace std;

using ll = long long;
using pll = pair<ll,ll>;

bool comp(const pll& a, const pll& b) { return a.s > b.s; }

void solve() {
	int n, m; ll ans = 0; cin >> n >> m;
	vector<pll> p;
	vector<ll> p_sum(1,0);
	vector<vector<int>> a(n,vector<int>(m,0));
	for (int i = 0;i < n;++i) {
		ll sum = 0;
		for (int j = 0;j < m;++j) {
			cin >> a[i][j];
			sum += a[i][j];
		}
		p.pb({(ll)i,sum});
	}
	sort(all(p),comp);
	for (int k = 0;k < n;++k) {
		int i = p[k].f;
		for (int j = 0;j < m;++j) {
			p_sum.pb(a[i][j]);
			//cout << a[i][j] << ' ';
		}
	}
	//cout << '\n';
	for (int i = 1;i < sz(p_sum);++i) {
		p_sum[i] = p_sum[i] + p_sum[i - 1];
		//cout << p_sum[i] << ' ';
		ans += p_sum[i];
	}
	//cout << '\n';
	cout << ans << '\n';
}

int main() {
	cin.tie(nullptr);
	ios::sync_with_stdio(0);
	int t; cin >> t;
	while (t--) solve();
	return 0;
}
