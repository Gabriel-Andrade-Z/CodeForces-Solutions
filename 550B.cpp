#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, l, r, x, ans = 0; cin >> n >> l >> r >> x;
	vector<int> a(n,0);
	for (int& i : a) cin >> i;
	for (int i = 1;i <= n;++i) {
		vector<int> b(n - i,0);
		while (b.size() != n) b.push_back(1);
		do {
			int mn = 1e9, mx = -1e9, sum = 0;
			for (int i = 0;i < n;++i) {
				if (b[i] == 1) {
					mn = min(mn,a[i]);
					mx = max(mx,a[i]);
					sum += a[i];
				}
			}
			if (mx - mn >= x && (l <= sum && sum <= r)) ++ans;
		} while (next_permutation(b.begin(),b.end()));
	}
	cout << ans << '\n';
}

int main() {
	cin.tie(nullptr);
	ios::sync_with_stdio(0);
	solve();
	return 0;
}
