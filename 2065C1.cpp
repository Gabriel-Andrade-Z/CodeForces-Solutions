#include <bits/stdc++.h>
using namespace std;

using vi = vector<int>;

void solve() {
	int n, m, b; cin >> n >> m; vi a(n,0);
	for (int& i : a) cin >> i; cin >> b;
	a[0] = min(a[0],b - a[0]);
	for (int i = 1;i < n;++i) {
		int x = a[i], y = b - a[i];
		if (min(x,y) >= a[i - 1]) a[i] = min(x,y);
		else if (max(x,y) >= a[i - 1]) a[i] = max(x,y);
		else { cout << "NO\n"; return; }
	}
	cout << "YES\n";
}

int main() {
	cin.tie(nullptr);
	ios::sync_with_stdio(0);
	int t; cin >> t;
	while (t--) solve();
	return 0;
}
