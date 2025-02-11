#include <bits/stdc++.h>
#define all(x) (x).begin(),(x).end()

using namespace std;

using vi = vector<int>;

void solve() {
	int n, m; cin >> n >> m; vi a(n,0), b(m,0);
	for (int& i : a) cin >> i;
	for (int& i : b) cin >> i;
	sort(all(b)); a[0] = min(a[0],b[0] - a[0]);
	for (int i = 1;i < n;++i) {
		int j = lower_bound(all(b),a[i] + a[i - 1]) - b.begin();
		if (j == m) --j;
		int p = a[i], q = b[j] - a[i];
		if (min(p,q) >= a[i - 1]) a[i] = min(p,q);
		else if (max(p,q) >= a[i - 1]) a[i] = max(p,q);
		else { cout << "NO\n"; return; }
	}
	cout << "YES\n";
}

signed main() {
	cin.tie(nullptr);
	ios::sync_with_stdio(0);
	int t; cin >> t;
	while (t--) solve();
	return 0;
}
