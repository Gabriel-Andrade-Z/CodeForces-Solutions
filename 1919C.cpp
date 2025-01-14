#include <bits/stdc++.h>
using namespace std;
const int inf = INT_MAX;

void solve() {
	int n, ans = 0; cin >> n;
	vector<int> a(n,0);
	for (int& i : a) cin >> i;
	int b = inf, c = inf;
	for (int i = 0;i < n;++i) {
		if (b > c) swap(b,c);
		if (b >= a[i]) b = a[i];
		else if (c >= a[i]) c = a[i];
		else b = a[i], ++ans;
	}
	cout << ans << '\n';
}

int main() {
	cin.tie(nullptr);
	ios::sync_with_stdio(0);
	int t; cin >> t;
	while (t--) solve();
	return 0;
}
