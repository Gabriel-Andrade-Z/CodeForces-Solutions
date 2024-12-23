#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	vector<int> div;
	if (n % 2 == 0) {
		for (int k = 2;k * k <= n && div.size() < 2;k += 2) {
			if (n % k == 0) { div.push_back(k); n /= k; }
		}
	}
	for (int k = 3;k * k <= n && div.size() < 2;k += 2) {
		if (n % k == 0) { div.push_back(k); n /= k; }
	}
	if (div.size() == 2 && n > 1 && n != div[0] && n != div[1]) {
		cout << "YES\n" << div[0] << ' ' << div[1] << ' ' << n << '\n';
	} else cout << "NO\n";
}

int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	int t; cin >> t;
	while (t--) solve();
	return 0;
}
