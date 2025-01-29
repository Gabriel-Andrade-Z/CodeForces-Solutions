#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
	int n, sum = 0; ll ans = 0; cin >> n;
	unordered_map<int,int> p; p[0] = 1;
	for (int i = 0;i < n;++i) {
		char c; cin >> c; sum += (c - '0'), ans += p[sum - (i + 1)], ++p[sum - (i + 1)];
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
