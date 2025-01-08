#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
	int n, ans = 0; cin >> n;
	vector<int> a(n);
	for (int& i : a) cin >> i;
	for (int i = 1;i < n;++i) {
		if (a[i] < a[i - 1]) {
			int op = ceil(log2(a[i - 1] - a[i] + 1));
			ans = max(ans,op);
			a[i] = a[i - 1];
		}
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
