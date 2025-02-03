#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, ans = 0; cin >> n;
	vector<int> a(n,0);
	for (int& i : a) cin >> i;
	for (int i = n / 2 - 1;i >= 0;--i) {
		if (a[i] == a[i + 1] || a[n - i - 1] == a[n - i - 2]) swap(a[i],a[n - i - 1]);
	}
	for (int i = 0;i < n - 1;++i) if (a[i] == a[i + 1]) ++ans;
	cout << ans << '\n';
}

int main() {
	cin.tie(nullptr);
	ios::sync_with_stdio(0);
	int t; cin >> t;
	while (t--) solve();
	return 0;
}
